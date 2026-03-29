all:
	gcc.exe -I src/include -o chess.exe chess.c -lSDL2 -lmingw32 -mwindows