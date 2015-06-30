result: tetris.cpp getMino.o Mino.cpp MinoS.cpp MinoT.cpp MinoL.cpp MinoZ.cpp
	g++ -o result tetris.cpp getMino.o Mino.cpp MinoS.cpp MinoT.cpp MinoL.cpp MinoZ.cpp 
getMino.o:getMino.cpp getMino.h
	g++ -c getMino.cpp

