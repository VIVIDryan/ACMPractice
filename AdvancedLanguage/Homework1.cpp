#include<iostream>
#include<stack>


using namespace std;

bool compare(void) {
	// ����ͬ�����͵����ŷ��벻ͬ��ջ��
	stack<char> bra;
	/*stack<char> cur;
	stack<char> mid;*/
	char ins;
	
	
	
	while ((ins = getchar()) != '\n') {
		if (ins == '(' || ins == '{' || ins == '[')
			bra.push(ins);
		else if (ins == ')') {
			if (bra.empty() || bra.top() != '(')
				return false;
			else
				bra.pop();
		}
		else if (ins == '}') {
			if (bra.empty() || bra.top() != '{')
				return false;
			else
				bra.pop();
		}
		else if (ins == ']') {
			if (bra.empty() || bra.top() != '[')
				return false;
			else
				bra.pop();
		}
	}
	return bra.empty();


}

//int main()
//{
//	if (compare()) {
//		cout << "1";
//	}
//	else
//		cout << "0";
//
//
//
//	return 0;
//}

