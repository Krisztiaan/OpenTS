---
title: Keep demand-loaded artwork under its owner's lifetime
category: fix
release: 0.2.0
targets:
- type: key
  id: DemandLoad
  scope: buildingtype
  effect: changed
- type: key
  id: DemandLoad
  scope: animtype
  effect: changed
- type: key
  id: DemandLoad
  scope: overlaytype
  effect: changed
- type: key
  id: DemandLoadBuildup
  effect: changed
- type: key
  id: FreeBuildup
  effect: changed
credit: [Krisztiaan, ZivDero]
---

A structure type with `DemandLoad=yes` now detaches the archive-owned shape found before
that setting is read. The type loads its own copy when the shape is first needed and
releases only that copy when the theater changes or the type is destroyed. A theater-aware
structure previously tried to release the archive's shared memory during theater setup,
which could stop a skirmish before play began.

Demand-loaded structure shapes and construction animations are now released as the byte
arrays that the file loader allocated. Their former scalar release did not match that
allocation and could corrupt the heap during theater changes, construction-art cleanup or
shutdown.

`FreeBuildup=yes` now releases construction artwork only when `DemandLoadBuildup=yes` gave
the structure type its own copy. On its own the setting leaves archive-owned artwork in
place instead of freeing shared memory and leaving later construction animations empty.

Demand-loaded animations and overlays now detach their archive-owned shapes after reading
their settings and after restoring a saved game. They release only the separate copies
loaded when first drawn, rather than handing archive memory back during theater changes or
shutdown.

An ordinary demand-loaded overlay now builds its deferred filename from its Image ID. Its
first draw loads the `.SHP` instead of reading through an uninitialized filename.
