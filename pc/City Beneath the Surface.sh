#!/bin/bash
/opt/retropie/emulators/dosbox/bin/dosbox -c "mount c ~/RetroPie/roms/pcdata" -c "c:" -c "cd cbs" -c "loadfix -25 CBS.EXE" -c "exit"