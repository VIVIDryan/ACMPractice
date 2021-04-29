// AdvancedLanguage.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    double n;
    double result;

    cin >> n;
    result = pow(abs(n), 0.5);
    cout <<  setprecision(4) << fixed<<result;

    return 0;
}

