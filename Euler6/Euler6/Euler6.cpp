// Euler6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int _tmain(int argc, _TCHAR* argv[])
{
	__int64 res1 = 0, res2 = 0;

	for (int x = 1; x <= 100; x++)
		res1 += x*x;

	//square of sums
	for (int x = 1; x <= 100; x++)
		res2 += x;
	res2 *= res2;

	std::cout << res1 << " res1" << std::endl;
	std::cout << res2 << " res2" << std::endl;
	std::cout << res2 - res1 << " result" << std::endl;

	getchar();
	return 0;
}

