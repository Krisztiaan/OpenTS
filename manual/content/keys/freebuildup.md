---
key: FreeBuildup
summary: Releases the structure's construction artwork once it is no longer needed.
see_also: ["Buildup", "DemandLoadBuildup"]
when_omitted:
  kind: value
  value: "no"
---

With this flag and [`DemandLoadBuildup=yes`](/keys/demandloadbuildup/) both set, construction artwork is released after it is used to measure a type's draw area, as each structure of the type is created and checked for sellability, when a structure finishes its buildup, and when a structure is destroyed. The next request loads it again.

Without `DemandLoadBuildup=yes`, this flag has no effect. The construction artwork remains attached to its archive and is not released or reloaded. This fixes prior OpenTS behavior that stripped the shared artwork after the first structure: later structures now retain their construction and deconstruction animation, remain sellable, and count as having construction artwork when selecting survivors, including conversion of nominal crew to technicians.
