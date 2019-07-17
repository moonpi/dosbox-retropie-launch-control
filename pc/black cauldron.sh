#!/bin/bash
/opt/retropie/emulators/dosbox/bin/dosbox -conf "/home/pi/RetroPie/pcdata/controls/bc/bc.conf" -c "mount c ~/RetroPie/roms/pcdata" -c "c:" -c "cd blac" -c "bc.com" -c "exit"