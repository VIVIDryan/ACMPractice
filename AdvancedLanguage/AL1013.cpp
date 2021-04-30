#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;



int findsquare()
{
    double n;
    double result;

    cin >> n;
    result = pow(abs(n), 0.5);
    cout <<  setprecision(4) << fixed<<result;

    return 0;
}

