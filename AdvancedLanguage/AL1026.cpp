#include <iostream>
#include <cmath>

using namespace std;

int AL1026(void) {

	int c = 0 ;
	int i = 0;
	int sum = 1;
	int N;
	char ch;

	cin >> N >> ch;
	for (i = 1; sum <= N; i++)
		sum = sum + (2*i + 1) * 2;
	
	sum = sum - (2 * (i-1) + 1) * 2;

	c = 2 * (i - 2) + 1;

	for (int o = c; o > 0; o-=2) {
		for (int g = 0; g < ((c - o) / 2); g++) {
			cout << " ";
		}
		
		for (int j = 0; j < o; j++) {
			cout << ch;
		}
		cout << endl;
	}
	
	
	for (int o = 3; o<c+2; o += 2) {
		for (int g = 0; g < ((c - o) / 2); g++) {
			cout << " ";
		}
		
		for (int j = 0; j < o; j++) {
			cout << ch;
		}
		cout << endl;
	}
	cout << N - sum;
	
	return 0;
}