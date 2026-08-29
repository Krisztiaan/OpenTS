---
key: DemandLoad
scope: animtype
label: Animation shape
see_also: ["FreeAfterPlaying", "Image", "NewTheater", "Theater"]
when_omitted:
  kind: value
  value: "no"
---

The flag is read after the animation's shape has already been found in the archives under its [Image ID](/keys/image/#scope-animtype). With the flag set, the animation type detaches that archive-owned shape without releasing it and leaves its own shape empty. Restoring a saved game also leaves the shape empty rather than attaching the archive's copy.

An animation that reaches a draw with no shape reads one from disk at that moment, and the frame count and loop end the type left unset are taken from it then rather than at load time. The name built for that read is the Image ID if the animation has one and the AnimType ID otherwise, with a `.SHP` extension; a [`Theater=yes`](/keys/theater/#scope-animtype) animation instead uses the AnimType ID with the theater's own extension, dropping the Image ID, and a [`NewTheater=yes`](/keys/newtheater/#scope-animtype) one has the built name rewritten for the theater.

On a `Theater=yes` or `NewTheater=yes` animation, the separately loaded shape is released when the theater changes. It is also released with the type, and on a [`FreeAfterPlaying=yes`](/keys/freeafterplaying/) animation as soon as the animation finishes playing — the only combination that gives artwork back during a match.
