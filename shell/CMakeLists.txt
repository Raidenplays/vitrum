# Vitrum shell — Phase 1a.
#
# One small process per component, each a layer-shell client. They run on
# any wlroots compositor (labwc recommended) until the Vitrum compositor
# lands in Phase 1b.
add_subdirectory(taskbar)
add_subdirectory(sidebar)
add_subdirectory(launcher)
add_subdirectory(lockscreen)
add_subdirectory(topbar)
