#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int AL1019(int m)
{
	if (m == -1)
	{
		cout << "ABSENT";
		goto B;
	}
	if ((m > 100) || (m < 0))
	{
		cout << "ERROR";
		goto B;
	}
	if (m == 100) {
		cout << "FULL MARKS";
		goto B;
	}else if (m > 89) {
		cout << "A+";
		goto B;
	}
	else if (m > 79) {
		cout << "A";
		goto B;
	}
	else if (m > 69) {
		cout << "B";
		goto B;
	}
	else if(m>59){
		cout << "C";
		goto B;
	}
	else {
		cout << "D";
	}




B:
	return 0;

}