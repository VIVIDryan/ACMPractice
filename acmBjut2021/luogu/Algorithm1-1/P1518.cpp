// Designed by Travis Chen
//P1518 [USACO2.4]Á½Ö»ËþÄ·ÎÖË¹Å£ The Tamworth Two

#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

struct Posi{
    int poiu[1][2];
    int status;
};
int P1518(void){
    clock_t start,ende, time;
    double totaltime;
    start = clock();
    char map[12][12] ={'0'};

    for (int i =0;i<12;i++){
        map[0][i] = '*';
        map[i][0] = '*';
        map[i][11] = '*';
        map[11][i] = '*';
    }

    int f[1][2];
    Posi ff  {{0,0}, 0};

    int c[1][2] ;
     Posi cc  {{0,0}, 0};

    for (int i = 1 ; i<11;i++){
        for (int j= 1;j <11;j++){
            cin>> map[i][j];
            if(map[i][j] == 'F'){
                f[0][0] = i;
                f[0][1] = j;
                map[i][j] = '.';
            }
            if(map[i][j] == 'C'){
                c[0][0] = i;
                c[0][1] = j;
                map[i][j] = '.';
            }
        }
    }

//    cout<<*f <<' '<<*c;
    ff.poiu[0][0] = f[0][0];
    ff.poiu[0][1] = f[0][1];
    cc.poiu[0][0] =c[0][0];
    cc.poiu[0][1] = c[0][1];
    // 0 = north 1 = west 2 = south 3 = east;
    ff.status = 0;
    cc.status = 0;
    int count =0;

    while(true){
        count ++;
       switch (ff.status)
           {
               case 0:
            if(map[ff.poiu[0][0]-1][ff.poiu[0][1]] == '*'){
                    ff.status =1;
            }else{
                ff.poiu[0][0]--;
            }
            break;
        case 1:
             if(map[ff.poiu[0][0]][ff.poiu[0][1]+1]=='*'){
                    ff.status =2;
            }else{
                ff.poiu[0][1]++;
            }
            break;
        case 2:
            if(map[ff.poiu[0][0]+1][ff.poiu[0][1]]=='*'){
                    ff.status =3;
            }else{
                ff.poiu[0][0]++;
            }
            break;
        case 3:
            if(map[ff.poiu[0][0]][ff.poiu[0][1]-1]=='*'){
                    ff.status =0;
            }else{
                ff.poiu[0][1]--;
            }
            break;

           }

         switch (cc.status){
             case 0:
            if(map[cc.poiu[0][0]-1][cc.poiu[0][1]]=='*'){
                    cc.status =1;
            }else{
                cc.poiu[0][0]--;
            }
            break;
        case 1:
             if(map[cc.poiu[0][0]][cc.poiu[0][1]+1]=='*'){
                    cc.status =2;
            }else{
                cc.poiu[0][1]++;
            }
            break;
        case 2:
            if(map[cc.poiu[0][0]+1][cc.poiu[0][1]]=='*'){
                    cc.status =3;
            }else{
                cc.poiu[0][0]++;
            }
            break;
        case 3:
            if(map[cc.poiu[0][0]][cc.poiu[0][1]-1]=='*'){
                    cc.status =0;
            }else{
                cc.poiu[0][1]--;
            }
            break;

         }


        if(ff.poiu[0][0] ==cc.poiu[0][0] &&ff.poiu[0][1] ==cc.poiu[0][1]){
            cout<<count;
            break;
        }
        if(((ff.poiu[0][0] ==f[0][0] && ff.poiu[0][1] ==f[0][1] ) ||(ff.poiu[0][0] ==c[0][0] && ff.poiu[0][1] ==c[0][1] ) )&& ff.status == 0 &&((cc.poiu[0][0] ==c[0][0]&& cc.poiu[0][1] ==c[0][1] )||(cc.poiu[0][0] ==f[0][0]&& cc.poiu[0][1] ==f[0][1]))&& cc.status == 0){
            cout <<0;
            break;
        }

        ende =clock();
        if((totaltime =(double)(ende - start)/CLOCKS_PER_SEC)>0.9){
            cout <<0;
            return 0;
        }

    }


   return 0;

}


