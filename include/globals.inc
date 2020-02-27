.INCLUDE "include/stdint_globals.inc"

; Globals can be anywhere from $01-$FF or $0256-$7FFF if your game doesn't use
; the Overlay. If it does, the range $7C00-$7FF8 is taken up by the Overlay
; tilemap.

;.DEFINE g_SomeGlobal $0256
;.ENUM $01
;g_SomeOtherGlobal DB
;g_SomeWordSizedGlobal DW
;g_LottaBytes DS 19
;.ENDE
