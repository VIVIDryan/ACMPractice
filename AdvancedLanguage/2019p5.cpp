#include <iostream>
#include <vector>
#include <cstdio>
#include <string>

using namespace std;

int bjutCup19P5(void) {
	int n;
	int d =0;

	while (scanf_s("%d", &n) !=EOF) {
		d = 0;
		while (n != 0) {
			if ((n % 10) % 2 == 0) {
				d = d + 1;
			}
			n = n / 10;
		}
	
		if (d%2 ==0)
		{
			cout << "bu ok" << endl;
		}
		else {
			cout << "ok" << endl;
		}
	}

	return 0;

}