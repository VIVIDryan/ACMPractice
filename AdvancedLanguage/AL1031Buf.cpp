#include <iostream>
#include <cmath>
using namespace std;

int func(int);

int AL1031Buf(void) {

	int c;
	int d;

	cin >> c;
	d = func(c);

	int number = round(sqrt(c));

	int* p  = new int[number];

	 
	//p = (int*)malloc(round(sqrt(c)) * sizeof(int));

	for (int i = 0; i < number; i++) {
		p[i] = 0;
	}
	if (c == 1) {
		return 0;
	}
	int j = 0;
	for (int i = 2; i <= number; i++) {
		if (c % i == 0) {
			cout << i << endl;
			p[j++] = c / i;
		}
	}
	int k = 0;
	for (k = 0; p[k] != 0; k++);
	k -= 1;
	for ( ; k >0; k--) {
		cout<< *(p+k)<<endl;
	}
	cout << *p;
	return 0;
}

//int func(int d) {
//	int i = 0;
//	while (d != 0) {
//		d = d / 10;
//		i++;
//	}
//
//	return i;
//}