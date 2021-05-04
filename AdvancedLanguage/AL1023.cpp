#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int AL1023(void) {
	int i = 100;
	int count = 0;
	for (i = 100; i < 999; i++) {
		if (i % 2 == 0) {
			cout << i << " ";
			count = count + 1;
			if (count % 10 == 0)
				cout << "\n";
		}
		

	}
	return 0;
}