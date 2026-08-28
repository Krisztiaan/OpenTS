---
title: Pace edge scrolling with the system timer
category: fix
release: 0.2.0
targets:
- type: key
  id: ScrollRate
  effect: changed
credit: [Krisztiaan]
---

Edge scrolling now moves the tactical map once per system-timer tick. It previously moved
once per main-loop frame while using the timer only to adjust acceleration, so directions
that rendered faster also scrolled faster.
