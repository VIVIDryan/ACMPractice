#include <iostream>
#include <cmath>
#include <string>
#include <vector>
using namespace std;
string anmulb1(string a, string b);
int P1303(void);
string P1601set(string a,string b);

int P1303(void){
    string a,b;
    int n;
    string sum={"0"};
    string lst;
    string ope;
    string zeo;

    cin >> a>>b;
    if (a=="0"||b=="0"){
        cout<<"0";
        return 0;
    }
    while(!b.empty()){
        lst = b[b.size()-1];

        ope = anmulb1(a,lst);
        ope.append(zeo);
        zeo +="0";
        sum = P1601set(sum,ope);
        b.pop_back();
    }

    cout << sum;

    return 0;

}
string anmulb1(string a, string b){
    int b1 = stoi(b);
    int ope;
    int temp;
    int stepout=0;

    string re;
    string temp1;
   while(!a.empty()){
        temp1 = a[a.size()-1];
        ope = stoi(temp1);
        temp = ope *b1 + stepout;

        if(temp > 9){
            stepout = temp /10;
            temp = temp %10;
        }else{
            stepout = 0;
        }
        a.pop_back();
       re.append(to_string(temp)) ;
    }
    if(stepout){
        re.append(to_string(stepout));
    }

    int ren = re.size();
    string te;
    string k;
    for(int i=0; i<ren; i++){
        te =re[re.size()-1];
        k.append(te);
        re.pop_back();
    }

    return k;
}

string P1601set(string a,string b){
    string re;


    int an = b.size();
    int bn = a.size();
    int temp;
    string temp1;
    int n1;
    int n2;
    string temp2;
    int flag =0;

    int max = bn>an?bn :an;
   for(int i =0; i <max;i++){



        if(!a.empty()){temp1 = a[a.size()-1];n1 = stoi(temp1);}
        if(!b.empty()){temp2 = b[b.size()-1];n2 = stoi(temp2);}
        temp = (a.size() == 0? 0: n1 )+(b.size() ==0? 0:n2 )+ flag;
        if (temp>9) {
            temp =temp%10;
            flag =1;
        }else{
            flag =0;
        }
        if(!a.empty())a.pop_back();
        if(!b.empty())b.pop_back();

        re.append(to_string(temp));

   }
    if(flag == 1){
        re.append("1");
    }
    //cout<< re.size();
    int ren = re.size();
    string k;
    string te;
    for(int i=0; i<ren; i++){
        te = re[re.size()-1];
        k.append(te);
        re.pop_back();
    }

    return k;

}

