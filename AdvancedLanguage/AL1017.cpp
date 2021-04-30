#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int AL1017(int a, int b, int c)
{
	int temp;
	int i = 0;
	while (i < 3) {
		if (a < b) {
			temp = b;
			b = a;
			a = temp;
		}
		if (b < c) {
			temp = c;
			c = b;
			b = temp;
		}
		i++;
	}
	cout << c <<" "<< b <<" "<< a;
	return 0;
}