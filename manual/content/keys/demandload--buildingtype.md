---
key: DemandLoad
scope: buildingtype
label: Structure shape
see_also: ["DemandLoadBuildup", "Image", "Theater"]
when_omitted:
  kind: value
  value: "no"
---

A structure's shape is first found in the archives under its [Image ID](/keys/image/), before this setting has been read. With the flag set, the structure type detaches that archive-owned shape without releasing it, records the [main-shape basename](/keys/image/#scope-buildingtype) for the current theater, and leaves its own shape empty.

The shape is read from disk the first time something asks to draw a structure of the type, and is held until the theater changes or the type is destroyed. A type nothing ever draws allocates nothing, and a structure whose shape cannot be found is not drawn at all.

The construction animation is a separate setting, [`DemandLoadBuildup`](/keys/demandloadbuildup/). The deploying, door, under-door, bib and Z-shape overlay artwork is fetched with the rules whatever this is set to.
