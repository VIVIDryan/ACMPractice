#include <iostream>
#include <iomanip>
#include "base.h"

using namespace std;


extern int AL1027(int);
int AL1028(void) {

	int f;
	int count = 0;
	for (int i = 100; i < 200; i++) {
		f = AL1027(i);
		if (f != 0) {
			count += 1;
			if (count % 5 == 0)
				cout << f << endl;
			else
				cout << f<<" ";
		}

	}

	return 0;
}