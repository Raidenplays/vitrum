# Vitrum Design Language

Status: Phase 0 — working draft. Open questions are marked [OPEN] and get
answered in design sessions, then locked in.

## 1. Core statement

> [OPEN] One or two sentences that define Vitrum's look. Draft: "Light,
> glass, and depth — an operating system that feels like looking through
> morning air."

## 2. Color & mood

**Decision (2026-10-14): two themes ship.**
- **Dark — deep underwater.** Abyssal blues, bioluminescent accents, light
  filtering down through water. Calm, deep, premium.
- **Light — 2000s beach core.** Sunny days, calm water, surfing. Frutiger
  Aero's home turf: aqua glass, optimism, Y2K shine.
- [OPEN] Exact palette per theme — locked in at mockup stage.
- [OPEN] Accent color system: single accent vs per-app accents?

## 3. Glass

**Leaning (2026-10-14): heavy frosted glass** — milky, diffused, dreamy panels
with glowing luminous edges. Mockups generated for both heavy and subtle;
final call still pending.
- [OPEN] Reflections and highlights on window chrome: how strong?
- [OPEN] Borders: luminous edges (Vista) vs minimal hairlines?

## 4. Layout

- Taskbar: bottom (familiar) or top? Centered icons or left?
- Start/launcher: menu, fullscreen, or something new?
- System tray & clock placement.
- **The reimagined sidebar** (our signature, from Longhorn): **DECIDED
  (2026-10-14) — widgets + notifications hub.** A wide frosted-glass panel
  docked right: clock, weather, calendar, music, notification stack. Not an
  app dock.
- [OPEN] Taskbar: position and style? → **DECIDED (2026-10-14): bottom
  taskbar**, classic position.
- **Top bar with universal menu (Unity-style global menu)** — decided
  2026-10-14. App menus live in the top bar.
- [OPEN] Start/launcher → **DECIDED (2026-10-14): classic start menu
  with type-to-search** (Windows 7–11 behavior).
- [OPEN] System tray & clock placement → **DECIDED (2026-10-14): in the
  sidebar widgets.** Clock and tray live as widgets in the sidebar hub.

## 5. Windows

- **Window buttons: bubble orbs** — DECIDED (2026-10-14). Glass spheres with
  bioluminescent glyphs; close orb carries an ember-red core. (Mockup in
  files/: vitrum-window-buttons.)
- **Window tabbing, Haiku/BeOS-style** — DECIDED (2026-10-14, Raiden's
  idea). Drag one window's title bar onto another to snap them together
  into a tabbed group. Our signature window-management move.
- [OPEN] Title bar text style: glowing text on glass?
- [OPEN] Aero Snap: keep drag-to-edge behavior?
- [OPEN] Window overview / exposé equivalent: our take?
- [OPEN] Alt+Tab switcher style.

## 6. Signature elements

- **The 3-second test** — Raiden's answer (2026-10-14): *"Because ours
  actually looks good."* The differentiator is craft and taste, delivered
  concretely by: bubble-orb window controls, the sidebar widget hub,
  underwater/beach themes, Haiku-style tabbing.
- **Login screen: XP welcome-screen layout, aero'ified** — DECIDED
  (2026-10-14). User tiles as frosted-glass cards on the right, branding on
  the left, theme backdrop (underwater/beach).
- **Boot splash / mascot** — DECIDED (2026-10-14): **Raiden's hand-drawn
  V** — flat vector style: yellow V with black edge, black oval sunglasses,
  orange swim trunks, little stick arms, standing on a green surfboard.
  The glossy AI render is NOT the direction; the mascot is his drawing,
  cleaned up. (Assets in files/: vitrum-mascot.svg + preview PNG.)

## 7. Iconography & typography

- **Icon style: glossy 3D, Vista-level richness** — DECIDED (2026-10-14).
  Detailed, dimensional, unapologetically glossy. As crazy as Vista's icons
  were. Original set, drawn for Vitrum.
- [OPEN] Font pairing: UI font and monospace. (No Segoe UI — original choices only.)

## 8. Motion

- **DECIDED (2026-10-14): a Settings option, default quick and snappy.**
  The alternative is a slow buoyant drift (underwater feel). User chooses;
  snappy out of the box.
- [OPEN] Window open/close/minimize transitions.
- [OPEN] Boot → login → desktop sequence feel.

## 9. Apps (forked, restyled)

- Priority order: file manager, terminal, text editor, image viewer, settings.
- Fork candidates to evaluate per app.
- How deep does restyling go: theme-only, or layout changes too?

## Decisions log

| Date | Decision |
| ---- | -------- |
| 2026-10-14 | Name: Vitrum. DE from scratch; apps forked. |
| 2026-10-14 | Two themes: dark deep-underwater, light 2000s beach core (sunny, calm water, surfing). |
| 2026-10-14 | Leaning heavy frosted glass (mockups for both made; to confirm). |
| 2026-10-14 | Sidebar = widgets + notifications hub (decided, 100%). |
| 2026-10-14 | Bottom taskbar + top bar with universal (Unity-style) global menu. |
| 2026-10-14 | Classic start menu with type-to-search. |
| 2026-10-14 | Bubble-orb window buttons (mockup approved). Haiku-style window tabbing by dragging title bars together. |
| 2026-10-14 | Glossy 3D icons, Vista-level richness. |
| 2026-10-14 | Motion = Settings option, default quick and snappy (slow drift available). |
| 2026-10-14 | Login screen = XP welcome layout, aero'ified (glass user tiles). |
| 2026-10-14 | Tray & clock live in the sidebar widgets. |
| 2026-10-14 | 3-second test: "ours actually looks good" — craft as differentiator. |
| 2026-10-14 | Mascot: glass V with sunglasses + swim trunks surfing a wave. |
