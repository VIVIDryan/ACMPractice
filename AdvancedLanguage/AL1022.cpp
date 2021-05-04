#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>


using namespace std;

int AL1022(void) {
	int a[4];
	char b[4];
	int i = 0;
	string ch;
	for (i = 0; i < 4; i++) {
		cin >> ch;
		if (ch.compare("not") == 0)
			a[i] = 0; //0 express not
		else
			a[i] = 1;
		cin >> b[i];
	}

	
	

	for (char s = 'A'; s <= 'D'; s++) {
		int sum =0;
		for (int l = 0; l < 4; l++)
		{
			if (a[l] == 0) {
				if (s != b[l])
					sum += 1;
			}
			else {
				if (s == b[l])
					sum += 1;
			}
		}
		if (sum == 3)
			cout << s;
	}
	return 0;
}