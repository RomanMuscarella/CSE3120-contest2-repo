.386

; Time to complete each level (in ms)
; Right now its set to 120 seconds, if you feel like that's too much or little we can change it as time goes on
LEVEL_TIME EQU 120000

;Board dimensions - will most likely change to a larger map size

MAP_WIDTH EQU 10
MAP_HEIGHT EQU 10

; Characters translating to tiles
WALL EQU '#'
BLOCK EQU '0'
SPECIAL_BLOCK EQU 'S'
EXIT_TILE EQU 'X'
EMPTY EQU '.'
PLAYER EQU 'P'

; Shared variables
EXTERNDEF xPos : BYTE
EXTERNDEF yPos : BYTE
EXTERNDEF map : BYTE
EXTERNDEF finish : BYTE
EXTERNDEF score : BYTE

; Procedures used by multiple files
GenMap PROTO
DisplayMap PROTO
GetMove PROTO
UpdateTile PROTO, tileIndex:DWORD, newTile:DWORD
DrawSingleTile PROTO, tileX:DWORD, tileY:DWORD, tileChar:DWORD
ProcessTurn PROTO
ResetBombState PROTO
Beep PROTO, dwFreq:DWORD, dwDuration:DWORD
