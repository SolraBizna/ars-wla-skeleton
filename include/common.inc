; This is the memory map for a cartridge with no banking; a single flat 32KiB
; ROM chip.
.MEMORYMAP
DEFAULTSLOT 0
SLOT 0 $8000 $8000
.ENDME
.ROMBANKSIZE $8000
.ROMBANKS 1

.INCLUDE "include/ars_registers.inc"
.INCLUDE "include/globals.inc"

.ORG 0
