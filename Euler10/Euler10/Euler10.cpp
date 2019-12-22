// Euler10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int _tmain(int argc, _TCHAR* argv[])
{
	unsigned __int64 total = 0;
	int x;

	for (int count = 2; count < 2000000; count++)
	{
		for (x = 2; x<count; x++)
		{
			if (count%x == 0)
			{
				x = count;
			}
		}
		if (x == count && x < 2000000)
		{
			total+=count;
		}
	}

	std::cout << total;

	getchar();
	return 0;
}
