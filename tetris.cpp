#include <iostream>
#include <cstdlib>
#include <ctime>
#include "getMino.h"
using namespace std;
int main()
{
	Mino * mino_ptr;
	srandom(time(NULL));
	for(int i=0;i<3;++i)
	{
		mino_ptr->rotatez();
		mino_ptr = getMino();
		mino_ptr->paint();
		delete mino_ptr;
	}
	return 0;
}
