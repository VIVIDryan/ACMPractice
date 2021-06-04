// Designed by Travis Chen
// 2021/5/23

#include <iostream>>
#include <cmath>
#include <string>
#include <cctype>

void outstring(char head, char trailer, int para1, int para2, int para3);
using namespace std;


int P1098(void){

    char input[101];

    ///////////////////
    //模式的定义
    //////////////////
    int para1 = 0;
    int para2 = 0;
    int para3 = 0;
    //////////////////
    //模式输入
    //////////////////
    cin >>para1>>para2>>para3;
    cin>>input;

    ////
    for(int i=0;input[i]!='\0';i++){
        if(input[i] == '-'&&((isalpha(input[i-1])&&isalpha(input[i+1]))||(isdigit(input[i-1])&&isdigit(input[i+1]) ))){
            outstring(input[i-1],input[i+1],para1,para2,para3);
        }else{
            cout<<input[i];
        }

    }

    return 0;

}

void outstring(char head, char trailer, int para1, int para2, int para3){
    string outs;
    char  ch;
    //当展开方式不同时, head和trailer的ASCII码不同
    //para2定义的重复次数不同

    if (head>=trailer){
        cout<<"-";
        return ;
    }

   if(para1 == 1){
   }else if (para1 == 2){
       head = toupper(head);
       trailer = toupper(trailer);
   }else{
       for(int i =0; i<(trailer-head-1);i++){
         for(int j=0;j<para2;j++){
            cout<<"*";
        }
       }
       cout << outs;
       return;
    }
    ch = head+1;
    string ope ="0";
    ope[0] = ch;

    while(ch<trailer){
        for(int j=0;j<para2;j++){
            outs.append(ope);
        }
        ch++;
        ope[0] = ch;

    }
    if (para3==2){
        string bak ;

        for(int i =(outs.size()-1);i>-1;i--){
           bak +=outs[i];
        }
        outs = bak;
    }
    cout << outs;

    return;
}
