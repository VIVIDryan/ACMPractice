#include <iostream>
#include <cmath>

using namespace std;

int AL1027(int c) {

	
	
		
		for (int i = 2; i <= pow(c, 0.5); i++) {
			if (c % i == 0) {
				
				//cout << "NO";
				return 0;
			}
		}

		//cout << "YES";
			
	return c;
}