set(PLUGIN "clock")

set(HEADERS
    lxqtclock.h
    lxqtclockconfiguration.h
    calendarpopup.h
)

set(SOURCES
    lxqtclock.cpp
    lxqtclockconfiguration.cpp
    calendarpopup.cpp
)

set(MOCS
    lxqtclock.h
    lxqtclockconfiguration.h
    calendarpopup.h
)

set(UIS
    lxqtclockconfiguration.ui
)

BUILD_LXQT_PLUGIN(${PLUGIN})
