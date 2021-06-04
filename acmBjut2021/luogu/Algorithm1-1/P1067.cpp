// Designed by Travis Chen

#include <iostream>
#include <cmath>
using namespace std;
int P1067(void){

    int N;
    int d;

    cin>>N;
    for (int i = 0;i<N;i++){
        cin>>d;

        if(i ==0&&d>0){
        }else if (d>0&&i!=0){
            cout<<"+";
        }else if(d<0){
            cout<<"-";
        }
        if(d>0){
            if (d!=1)
            cout<<d;
            if ((N-i)>1)cout<<"x^"<<N-i;
        else  cout<<"x";
        }else if (d ==0){
        }else{
            if(d != -1) cout<<-d;
            if ((N-i)>1)cout<<"x^"<<N-i;
        else  cout<<"x";
        }
    }
    cin>>d;
    if(d!=0) {
        if(d>0) cout<<"+"<<d;
        if(d<0) cout<<d;}

///////////////////////////////////////////////
return 0;



}
