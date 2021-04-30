#include <iostream>
#include <cmath>
#include <stdio.h>

using namespace std;


int AL1016(int d)
{

	int a[3];
	int i = 0;


	a[0] = d % (int)(pow(10, 1));
	for (i = 1; i < 3; i++)
	{
		a[i] = (d % (int)(pow(10, i + 1)) - a[i - 1]) / pow(10, i);
	}
	// 0-2 为从低位到高位
	cout << a[0] << a[1] << a[2];

	return 0;



}

