#include <iostream>
#include <cmath>

int AL1015(int a, int b)
{
	int max = (a > b) ? a:b;
	int min = (a < b) ? a : b;
	int c =0;
	int i = 1;
	while (i < min+1) {
		if ((a % i == 0) && (b % i == 0))
			c = i;
		
		i++;
	}
	
	return c;
}