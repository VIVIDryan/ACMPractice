#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <stdio.h>
using namespace std;

int AL1025(void) {
	int w, h;
	char c;
	int status;
	
	cin >> h >> w >> c >> status;

	for (int i = 0; i < w; i++) {
		cout << c;
	}
	cout << endl;
	for (int i = 0; i < (h - 2); i++) {
		cout << c;
		
		for (int j = 0; j < (w - 2); j++) {
			if (status == 0)
				cout << " ";
			else
				cout << c;
		}
		cout << c<<endl;

	}
	for (int i = 0; i < w; i++) {
		cout << c;
	}

	return 0;
}