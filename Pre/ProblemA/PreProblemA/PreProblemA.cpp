// PreProblemA.cpp 

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int CaseN;
	int StageN =0;
	
	cin >> CaseN;
	int* p = new int[CaseN];
	for (int i = 0; i < CaseN; i++) {
		cin >> *(p + i);
		//test example
	}

	for (int j = 0 ; j < CaseN; j++) {
		StageN = StageN + floor(*(p + j) / 3);
	}
		
	cout << StageN;
	

	return 0;
}

