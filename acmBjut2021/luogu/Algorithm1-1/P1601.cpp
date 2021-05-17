#include <iostream>
#include <cmath>
#include <string>
#include <stack>
using namespace std;


int P1601(void){
    stack<int> a;
    stack<int> b;
    stack<int> re;
    int an =0;
    int bn= 0;
    char ch;

    while((ch=getchar()) != '\n'){
        a.push(ch-('1'-1));
        an += 1;
    }

    while ((ch=getchar()) != '\n'){
        b.push(ch-('1'-1));
        bn += 1;
    }
    int temp;
    int flag = 0;
    while (!a.empty() || !b.empty()){
        temp = (a.empty()?0:a.top() )+(b.empty()?0:b.top()) + flag;
        a.pop();
        b.pop();
        if(temp>9){
            temp = temp%10;
            flag = 1;
            re.push(temp);
        }else{
            flag = 0;
            re.push(temp);
        }
    }
    if(flag==1){
        re.push(1);
        flag = 0;
    }

    while(!re.empty()){
        cout<<re.top();
        re.pop();
    }

    return 0;
}
