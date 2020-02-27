.ENUM $0200
r_BGScrollX DB
r_BGScrollY DB
r_Multi DB
r_BGTileBases DW
r_SPPalettes DB
r_BGPalettes DS 4
r_BGFG DS 4
r_OLPalette DB
r_ColorMod DB
r_VRAMPage DB
r_VRAMPort DB
r_CRAMIndex DB
r_CRAMPort DB
r_SSMIndex DB
r_SSMPort DB
r_SAMIndex DB
r_SAMPort DB
r_VRAMIndex DB
r_IRQScanline DB
r_VRAMDMA DB
r_VRAMSplatDMA DB
r_CRAMDMA DB
r_SSMDMA DB
r_SAMDMA DB
r_SSMUnpackedDMA DB
.ENDE

.ENUM $0220
r_VoiceRateLo DS 7
r_APUUnused DB
r_VoiceRateHi DS 7
r_NoisePeriod DB
r_VoiceWaveform DS 7
r_NoiseWaveform DB
r_VoiceVolume DS 7
r_NoiseVolume DB
.ENDE

.DEFINE r_Controller1 $0240
.DEFINE r_Controller2 $0241
.DEFINE r_Floppy $0242
.DEFINE r_HAM $0245
.DEFINE r_EmuConfig $0246
.DEFINE r_Debug $0247

.DEFINE r_BankSelect $0248
.DEFINE r_BankSelect8 $0248
.DEFINE r_BankSelect9 $0249
.DEFINE r_BankSelectA $024A
.DEFINE r_BankSelectB $024B
.DEFINE r_BankSelectC $024C
.DEFINE r_BankSelectD $024D
.DEFINE r_BankSelectE $024E
.DEFINE r_BankSelectF $024F

.DEFINE r_OLTiles $7C00
.DEFINE r_OLAttributes $7F80
