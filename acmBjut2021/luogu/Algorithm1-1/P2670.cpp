#include <iostream>
#include <cmath>
#include <string.h>
using namespace std;
int P2670(void){
    int n,m;
    cin>>n>>m;

    char ch;

    int Rset[102][102];

    memset(Rset,0,sizeof(Rset));

    // Initialize
//    for(int i=0;i<n+2;i++){
//       for(int j=0;j<m+2;j++){
//        Rset[i][j] = 0;
//       }
//    }
    ch =getchar();
    for(int k=1;k<n+1;k++,getchar()){
        for(int l=1;l<m+1;l++){
            ch = getchar();
            if(ch == '*')
                Rset[k][l] = 1;
        }
    }

    for(int k =1; k<n+1;k++,cout<<endl){
        for(int l=1;l<m+1;l++){
            if(Rset[k][l] == 1)
                cout<<"*";
            else{
                cout<<Rset[k-1][l-1]+Rset[k-1][l]+Rset[k-1][l+1]+Rset[k][l-1]+Rset[k][l+1]+Rset[k+1][l-1]+Rset[k+1][l]+Rset[k+1][l+1];
            }
        }
    }

    return 0;
}
