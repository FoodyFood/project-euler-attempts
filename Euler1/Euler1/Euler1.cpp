// Euler1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


int _tmain(int argc, _TCHAR* argv[])
{
	int res = 0;
	for (int y = 0; y<1000; y++)
	{
		if (y % 3 == 0 || y % 5 == 0)
			res += y;
	}
	std::cout << res << std::endl;
	getchar();
	return 0;
}

