#include <iostream>
#include <cmath>

using namespace std;

int bjutCup19P3(void) {
	int n[100] = { 0 };
	int m[100] = { 0 };
	int setn;
	int number[100] = { 0 };

	cin >> setn;
	for (int i = 0; i < setn; i++)
		cin >> m[i] >> n[i];
	

	int j = -1;
	int k = 0;
	int l = 0;
	for (int i = 0; i < setn; i++,j=-1) {
		while (++j <= (m[i] - 2)) {
			for (k = j ; k <= m[i] ; k++) {
				for (l = k ; l <= m[i]; l++) {
					for(int b =2; b<=n[i];b++)
						if (pow(j, b) + pow(k, b) == pow(l, b)) {
							number[i]+=1;
						}
				}
			}
		}
	}
	
	for (int i = 0; i < setn; i++)
		cout << number[i]<<endl;
	
	return 0;
}