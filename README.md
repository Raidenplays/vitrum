# Vitrum

An original desktop environment and OS with a Longhorn/Vista-inspired Aero
glass aesthetic. Not based on Windows, not based on Mac — *the Longhorn that
never shipped, reimagined.*

## Architecture

- **Vitrum Shell** — built from scratch: a Wayland compositor plus the
  desktop shell (panel, launcher, window management with real glass/blur,
  lock screen, wallpaper engine). Tech stack: wlroots (C++) compositor +
  Qt 6 / QML shell.
- **Vitrum Apps** — forked from proven open-source apps and restyled in the
  Vitrum design language. Forking beats rewriting: we get stability for free
  and spend our design budget on the look and feel.
- **Vitrum OS** — the full installable OS image shipping the shell and apps
  (Phase 3, elementary-OS model).

## Roadmap

- **Phase 0 — Identity & design.** Name, logo, design-language doc, mockups.
- **Phase 1 — Shell prototype.** Compositor + panel + launcher + glass
  effects + lock screen. The demo-able milestone.
- **Phase 2 — Apps.** Fork and restyle: file manager, terminal, text editor,
  image viewer, system settings.
- **Phase 3 — OS image.** Installer ISO shipping everything.

## Status

Phase 0 — design. See `docs/` as it fills in.

## Building (Phase 1a)

Dependencies: Qt 6, CMake 3.21+, Ninja, LayerShellQt, Wayland dev
libraries (`libwayland-dev`, `wayland-protocols`).

```sh
cmake -S . -B build -G Ninja -DCMAKE_BUILD_TYPE=Release
cmake --build build
```

The shell components are layer-shell clients — run them on labwc or Sway
until the Vitrum compositor lands in Phase 1b.

## License

GPL-3.0. See LICENSE.
