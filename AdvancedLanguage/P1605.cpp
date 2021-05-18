#include <iostream>
#include <cmath>
#include <string>
#include <stack>
using namespace std;


int P1601(void) {
    /*     stack<int> a;
     *     stack<int> b;
     *     stack<int> re;
     *     int an =0;
     *     int bn= 0;
     *     char ch;
     *
     *     while((ch=getchar()) != '\n'){
     *         a.push(ch-('1'-1));
     *         an += 1;
     *     }
     *
     *     while ((ch=getchar()) != '\n'){
     *         b.push(ch-('1'-1));
     *         bn += 1;
     *     }
     *     int temp;
     *     int flag = 0;
     *     while (!a.empty() || !b.empty()){
     *         temp = (a.empty()?0:a.top() )+(b.empty()?0:b.top()) + flag;
     *         a.pop();
     *         b.pop();
     *         if(temp>9){
     *             temp = temp%10;
     *             flag = 1;
     *             re.push(temp);
     *         }else{
     *             flag = 0;
     *             re.push(temp);
     *         }
     *     }
     *     if(flag==1){
     *         re.push(1);
     *         flag = 0;
     *     }
     *
     *     while(!re.empty()){
     *         cout<<re.top();
     *         re.pop();
     *     }
     */

    string a, b;
    string re;

    cin >> a >> b;

    int an = a.size();
    int bn = b.size();
    int temp;
    string temp1;
    int n1;
    int n2;
    string temp2;
    int flag = 0;

    int max = bn > an ? bn : an;
    for (int i = 0; i < max; i++) {



        if (!a.empty()) { temp1 = a[a.size() - 1]; n1 = stoi(temp1); }
        if (!b.empty()) { temp2 = b[b.size() - 1]; n2 = stoi(temp2); }
        temp = (a.size() == 0 ? 0 : n1) + (b.size() == 0 ? 0 : n2) + flag;
        if (temp > 9) {
            temp = temp % 10;
            flag = 1;
        }
        else {
            flag = 0;
        }
        if (!a.empty())a.pop_back();
        if (!b.empty())b.pop_back();

        re.append(to_string(temp));

    }
    if (flag == 1) {
        re.append("1");
    }
    //cout<< re.size();
    int ren = re.size();

    for (int i = ren - 1; i > -1; i--) {
        cout << re[i];
    }

    return 0;
}
