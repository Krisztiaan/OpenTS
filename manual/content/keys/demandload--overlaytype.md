---
key: DemandLoad
scope: overlaytype
label: Overlay shape
see_also: ["Image", "NewTheater", "Theater"]
when_omitted:
  kind: value
  value: "no"
---

The flag is read after the overlay's shape has already been found in the archives under its [Image ID](/keys/image/). With the flag set, the overlay type detaches that archive-owned shape without releasing it and leaves its own shape empty. Restoring a saved game also leaves the shape empty rather than attaching the archive's copy.

An overlay that reaches a draw with no shape reads one from disk at that moment. An ordinary overlay uses its Image ID with a `.SHP` extension, a [`Theater=yes`](/keys/theater/) overlay uses the theater's extension, and a [`NewTheater=yes`](/keys/newtheater/) overlay rewrites the ordinary name for the current theater.

The separately loaded shape is held until the type is destroyed. A theater-aware overlay also releases it when the theater changes so the next draw loads the matching copy.
