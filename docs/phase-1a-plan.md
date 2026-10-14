# Vitrum Phase 1a — The Three Ameegos Plan

## Principle

"From scratch" means our own shell and compositor code — not a reskin of
KDE/GNOME — but not 100% from zero. We build on standard foundations
(wlroots, Qt 6/QML, Wayland protocols) and use existing tools and projects
wherever they're needed.

## Goal

A working Vitrum shell running as layer-shell clients on an existing
wlroots compositor (labwc). Demo-able and daily-drivable:

- Bottom taskbar (classic, with type-to-search start menu)
- Right sidebar: widgets + notifications hub (clock, weather, calendar,
  music, notifications, tray)
- Top bar: universal (global) menu
- Lock screen (XP-welcome-layout, aero'ified)
- Heavy frosted glass theme, bubble-orb window controls rendered by the
  host compositor's decorations where possible, full custom ones in 1b

## Workstreams

1. **Design lock-in** — remaining mockup-stage details (palettes,
   reflections, title-bar text), icon concepts. Raiden + Astro.
2. **Repo scaffolding** — CMake/Qt project layout, CI builds, contribution
   guide, coding standards. Astro.
3. **QML shell components** — taskbar, sidebar, launcher, lock screen,
   top bar. Claude builds, Raiden directs, Astro integrates.
4. **Dogfooding** — run the shell daily on labwc, file everything that
   sucks. Raiden.

## Roles

- **Raiden** — founder: direction, design calls, testing.
- **Claude** — builder: QML components.
- **Astro** — repo/CI, design assets, mockups, project management,
  integration.

## Phase 1b (funded, later)

Custom wlroots compositor with the signature pieces: bubble-orb chrome,
3D flip-through overview, Haiku-style window tabbing, full glass/blur
effects engine. Built by a hired C++/Qt/Wayland dev — on top of the proven
Phase 1a shell, so the hire sees a working vision, not a pitch doc.

## Out of scope for 1a

Custom compositor, app forks, OS ISO.
