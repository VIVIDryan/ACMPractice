#include <iostream>
#include <cmath>

using namespace std;



int AL1031(void) {

	int a[3];
	int i = 0;

	for (int d = 100; d < 999; d++) {
		a[0] = d % (int)(pow(10, 1));
		for (i = 1; i < 3; i++)
		{
			a[i] = (d % (int)(pow(10, i + 1)) - a[i - 1]) / pow(10, i);
		}

		if ((pow(a[1], 3) + pow(a[0], 3) + pow(a[2], 3)) == d)
			cout << d << endl;

		
	}

	
	return 0;

}

