#include <iostream>
#include <vector>
#include <cstdio>
#include <cmath>

using namespace std;
int P1(void) {


    char* a = new char[62500];

    int aw = 0, al = 0;

    //cout<<a<<" "<<b<<endl;

    int gamen = 0;
    int c = 0;
    int l = -1;
    while (++l < 62500)
    {
        a[l] = getchar();
        if (a[l] == 'E')
            break;
    }

    if (a[0] == 'E') {
        cout << "0:0" << endl << endl << "0:0";


        return 0;
    }


    int i = 0;
    while (a[i] != 'E') {
        if (a[i] == 'W')
            aw += 1;
        if (a[i] == 'L')
            al += 1;

        if (abs(aw - al) >= 2) {
            if (aw >= 11 || al >= 11) {
                cout << aw << ':' << al << endl;
                aw = 0;
                al = 0;
                //gamen +=1;
            }
        }
        i += 1;
        if (a[i] == 'E' && (aw != 0 || al != 0))  cout << aw << ':' << al<<endl;
    }

    //cout << '\n' ;
    aw = 0;
    al = 0;
    i = 0;
    while (a[i] != 'E') {
        if (a[i] == 'W')
            aw += 1;
        if (a[i] == 'L')
            al += 1;

        if (abs(aw - al) >= 2) {
            if (aw >= 21 || al >= 21) {
                cout <<'\n'<< aw << ':' << al << endl;
                aw = 0;
                al = 0;
                //gamen +=1;
            }
        }
        i += 1;
        if (a[i] == 'E' && (aw != 0 || al != 0))  cout << '\n'<< aw << ':' << al;
    }

    return 0;
}
