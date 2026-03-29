# Chess Game Compilation Guide

## Quick Start

### CLI Version (Terminal)
```bash
gcc chess.c -o chess.exe
.\chess.exe --cli
```

### GUI Version (Recommended - Graphical with SDL2)
```bash
gcc chess.c -o chess_gui.exe -I src/include ./libSDL2.a -luser32 -lgdi32 -lwinmm -limm32 -lole32 -loleaut32 -lshell32 -lsetupapi
.\chess_gui.exe
```

### Default Output
```bash
gcc chess.c
.\a.exe --cli
```

## What Each Does

| Command | Output | How to Run | Features |
|---------|--------|-----------|----------|
| `gcc chess.c -o chess.exe` | chess.exe | `.\chess.exe --cli` | Terminal-based chess with text interface |
| `gcc chess.c -o chess_gui.exe -I src/include ./libSDL2.a -luser32 -lgdi32 -lwinmm -limm32 -lole32 -loleaut32 -lshell32 -lsetupapi` | chess_gui.exe | `.\chess_gui.exe` | Graphical interface with mouse controls |
| `gcc chess.c` | a.exe | `.\a.exe --cli` | Terminal-based (default name) |

## Compilation Flags Explained

- `-o filename.exe` — Set output executable name
- `-I src/include` — Include path for SDL2 headers
- `./libSDL2.a` — Link SDL2 library
- `-luser32 -lgdi32 -lwinmm -limm32 -lole32 -loleaut32 -lshell32 -lsetupapi` — Windows system libraries required by SDL2

## How to Play

### Terminal Mode
- Enter moves as: `e2e4` (source square to destination square)
- Type `exit` to quit
- Pieces: P=Pawn, N=Knight, B=Bishop, R=Rook, Q=Queen, K=King
- Uppercase = White, Lowercase = Black

### GUI Mode
- Click a piece to select it (highlights in green)
- Click target square to move
- Mouse-based full chess interface
