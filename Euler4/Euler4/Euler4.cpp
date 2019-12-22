// Euler4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <math.h>
#include <iostream>


int _tmain(int argc, _TCHAR* argv[])
{
	float top = 999 * 999;
	char buffer[7] = { 0,0,0,0,0,0,0 };
	int found = 0;

	for (int x = 999; x>99; x--)
	{
		for (int y = 999; y>99; y--)
		{
			top = x*y;
			_itoa_s(top, buffer, 10);

			if (buffer[0] == buffer[5])
				if (buffer[1] == buffer[4])
					if (buffer[2] == buffer[3])
						if (top>found)
							found = top;
		}
	}

	std::cout << found << std::endl;
	getchar();
	return 0;
}

