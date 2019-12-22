// Euler5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int _tmain(int argc, _TCHAR* argv[])
{
	bool found = false;
	int x;

	for (x = 20 * 19; !found; x++)
	{
		for (int t = 2; t <= 20; t++)
		{
			if (x%t == 0)
				found = true;
			else
			{
				t = 21;
				found = false;
			}
		}
		if (found)
			std::cout << x;
	}

	getchar();
	return 0;
}

