#include <cstdlib>
#include "getMino.h"
#define NUM_MINO 4
#define MINO_S 0
#define MINO_L 1
#define MINO_Z 2
#define MINO_T 3
Mino * getMino()
{
	int mino_type;
	Mino * ptr;
		  
	mino_type = random() % NUM_MINO;
		    
	switch(mino_type) {
		case MINO_S:
			ptr = new MinoS;
			ptr->turn();
			break;
		case MINO_L:
			ptr = new MinoL;
			break;
		case MINO_T:
			ptr = new MinoT;
			break;
		case MINO_Z:
			ptr = new MinoZ;
			break;
	}
		return ptr;
}
