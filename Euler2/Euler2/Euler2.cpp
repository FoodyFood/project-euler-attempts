// Euler2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int _tmain(int argc, _TCHAR* argv[])
{
	int oCount1 = 1;
	int oCount2 = 1;
	int nCount = 0;
	int res = 0;

	while (nCount < 4000000)
	{
		nCount = oCount1 + oCount2;
		oCount1 = oCount2;
		oCount2 = nCount;

		if (nCount % 2 == 0)
			res += nCount;
	}

	std::cout << res << std::endl;
	getchar();

	return 0;
}