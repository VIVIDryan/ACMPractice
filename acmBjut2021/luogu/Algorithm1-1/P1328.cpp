#include <iostream>
#include <cmath>
#include <string.h>
using namespace std;
int winorloss(int a, int b);

int P1328(void){
    int N;
    int Na;
    int Nb;
    cin >> N>>Na>>Nb;

    int a[200];
    int scorea =0;
    int b[200];
    int scoreb =0;

    for(int i =0; i<Na; i++){
        cin >>a[i];
    }
       for(int i =0; i<Nb; i++){
        cin >>b[i];
    }
    int temp =0;
    int j =0;
    while ( j< N){
        temp = winorloss(a[j%Na],b[j%Nb]);
        if(temp == 0){
        }else if (temp == 1){
            scorea ++;
        }else{
            scoreb ++;
        }
        j++;
    }

    cout << scorea<<" "<<scoreb;
    return 0;
}

int winorloss(int a, int b){
    char tab[5][5] ={
// ------剪刀---石头---布---蜥蜴人---斯波克
        {     0,      -1,      1,      1,        -1  },
        {    1,        0,      -1,     1,        -1 },
        {    -1,      1,        0,     -1,       1},
        {     -1,     -1,      1,      0,       1},
        {     1,       1,       -1,    -1 ,     0}
    };

    return tab[a][b];
}
