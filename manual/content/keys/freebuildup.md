---
key: FreeBuildup
summary: Releases the structure's construction artwork once it is no longer needed.
see_also: ["Buildup", "DemandLoadBuildup"]
when_omitted:
  kind: value
  value: "no"
---

With this flag and [`DemandLoadBuildup=yes`](/keys/demandloadbuildup/) both set, the construction artwork is released at three moments: as each structure of the type is created and has been asked whether it may ever be sold, as a structure of the type finishes its buildup and opens, and as a structure of the type is taken off the map. The next structure that needs it loads it again.

Without `DemandLoadBuildup=yes`, this flag has no effect. The construction artwork remains attached to its archive and is not released or reloaded.
