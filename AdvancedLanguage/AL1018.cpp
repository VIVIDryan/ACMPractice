#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int AL1018(double t)
{
	double sum;

	if (t >= 2) {
		sum = pow(t, 2) - 2 * t + 1;
	}
	else if(t>=1){
		sum = pow(t, 2) - 1;
	}
	else {
		sum = pow(t, 2);
	}

	cout << setprecision(3) << fixed << sum;
	return 0;
}