#include <iostream>
#include <cmath>
#include <string>

using namespace std;
extern string P1601set(string a,string b);
string factorial(int n);
string P1303(string a, string b);
extern string anmulb1(string a, string b);

int P1998(void){
    int n;
    string S ={"0"};
    string temp;


    cin >> n;


    for (int i=0; i<n;i++){

    temp = factorial(i+1);
     S = P1601set(S, temp);
    }

    cout << S;
    return 0;
}
string factorial(int n){
    int i =1;
    string ope;
    string sum = {"1"};
    while (i <= n){
        ope = to_string(i);
        sum = P1303(ope,sum);
        i++;
    }

    return sum;
}


string P1303(string a, string b){

    int n;
    string sum={"0"};
    string lst;
    string ope;
    string zeo;


    if (a=="0"||b=="0"){
    string d {"0"};
        return d;
    }
    while(!b.empty()){
        lst = b[b.size()-1];

        ope = anmulb1(a,lst);
        ope.append(zeo);
        zeo +="0";
        sum = P1601set(sum,ope);
        b.pop_back();
    }

    //cout << sum;

    return sum;

}
