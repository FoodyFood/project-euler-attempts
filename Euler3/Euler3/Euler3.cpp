// Euler3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

#define prime_count 5000
int prime[prime_count];

bool addtolist(int value)
{
	int prime_pos = 0;
	while (prime[prime_pos])
		prime_pos++;
	if (prime_pos > prime_count - 1)
		return true;
	prime[prime_pos] = value;
	return false;
}

int _tmain(int argc, _TCHAR* argv[])
{
	unsigned __int64 input = 600851475143;
	int pos = prime_count;
	bool list_full = false;

	while (pos-->0)
		prime[pos] = 0;

	for (int count = 2; !list_full; count++)
	{
		int x;

		for (x = 2; x<count; x++)
		{
			if (count%x == 0)
			{
				x = count;
			}
		}

		if (x == count)
		{
			list_full = addtolist(count);
		}
	}

	for (int c = prime_count - 1; c >= 0; c--)
	{
		if (input%prime[c] == 0)
		{
			std::cout << prime[c] << std::endl;
			break;
		}
	}

	getchar();
	return 0;
}
