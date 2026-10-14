# Contributing to Vitrum

## Ground rules

1. `docs/design-language.md` is law. UI changes follow it; if the design
   doc is wrong, change the doc first, in the open.
2. Phase 1a builds **layer-shell clients** that run on labwc/Sway. No
   custom compositor code yet — that is Phase 1b.
3. QML for UI, C++ for logic. Keep business logic out of QML where
   practical.
4. "From scratch" means our own code on standard foundations (wlroots,
   Qt, Wayland protocols) — not a reskin, and not reinvented wheels.

## Workflow

- Branch from `main`, open a PR, get one review.
- CI must pass: CMake + Qt 6 configure and build on Ubuntu.

## Building

See README.md.
