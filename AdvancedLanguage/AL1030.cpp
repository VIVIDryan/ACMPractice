#include <iostream>
#include <cmath>

using namespace std;

extern int func(int);

int AL1030(void) {
	int n;
	int d;
	int k=0;
	
	cin >> n;
	

	int counts = 0;

	for (int i = 1; i <= n; i++) {
		d = func(i);
		k = i;
		for (int j = 0; j < d; j++) {
			if (i % 10 == 1)
				counts += 1;
			i = i / 10;
		}
		i = k;
		

	}
	cout << counts;
	


	return 0;
}

//int func(int d) {
//	int i = 0;
//
//	while (d != 0) {
//		d = d / 10;
//		i++;
//	}
//
//	return i;
//}
