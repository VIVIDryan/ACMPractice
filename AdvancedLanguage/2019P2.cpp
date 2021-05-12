#include <iostream>
#include <cmath>

using namespace std;

int bjutCup19P2(void) {
	char ch;
	int i = 0;
	char temp = NULL;
	bool flag = false;

	while ((ch = getchar()) != '\n' && i++ < 1000000) {
		if (ch == 'p') {
			temp = ch;
			flag = true;
			continue;
		}
		if (flag == true)
		{
			if (ch == 'c') {
				cout << "mac";
				flag = false;
				continue;
			}
			else {
				cout << temp << ch;
				flag = false;
				continue;
			}
				
		}
		cout << ch;
		

	}


	return 0;
	
}