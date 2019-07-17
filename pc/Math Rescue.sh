#!/bin/bash
/opt/retropie/emulators/dosbox/bin/dosbox -conf "/home/pi/RetroPie/roms/pcdata/controls/matres/mathres.conf" -c  "mount c ~/RetroPie/roms/pcdata" -c "c:" -c "cd Mathr" -c "MR1.exe" -c "exit"
