#!/bin/bash
/opt/retropie/emulators/dosbox/bin/dosbox -c "mount c ~/RetroPie/roms/pcdata" -c "c:" -conf "/home/pi/RetroPie/roms/pcdata/controls/em/em.conf" -c "cd em" -c "em.exe" -c "exit"