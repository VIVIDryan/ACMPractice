#include <iostream>
#include <cmath>
#include <iomanip>


using namespace std;
int func(int d);

int AL1020(void) {
	int a[100];
	int i = 0;
	int sizes;
	int digit[100];
	
	cin >> sizes;

	while (i<sizes) {
		cin >> a[i];
		i++;
	}

	for (i = 0; i < sizes; i++) {
		digit[i] = func(a[i]);
	}

	
	
	for (int j = 0; j < sizes; j++) {
		int temp[10];
		i = 0;

		while (i < digit[j]) {
			temp[i] = a[j] % (int)pow(10, i + 1);
			i++;
		}
		for (int o = digit[j]; o >1; o--) {
			temp[o - 1] = (temp[o - 1] - temp[o - 2])/pow(10,o-1);
			
		}
		for (i = 0; i < digit[j]; i++) {
			cout << temp[i];
			temp[i]=0;
		}
		cout << endl;

	}
	




	return 0;
}


// count the digit
int func(int d) {
	int i = 0;

	while (d!=0) {
		d = d / 10;
		i++;
	}

	return i;
}

