#include <iostream>
#include <cmath>
#include <string>
using namespace std;
/* 这时singersingersinger告诉小南一个谜題: “眼镜藏在我左数第3个玩具小人的右数第111个玩具小人的左数第222个玩具小人那里。 ”
 *
 * 小南发现, 这个谜题中玩具小人的朝向非常关键, 因为朝内和朝外的玩具小人的左右方向是相反的: 面朝圈内的玩具小人, 它的左边是顺时针方向, 右边是逆时针方向; 而面向圈外的玩具小人, 它的左边是逆时针方向, 右边是顺时针方向。
 *
 * 小南一边艰难地辨认着玩具小人, 一边数着:
 *
 * singersingersinger朝内, 左数第333个是archerarcherarcher。
 *
 * archerarcherarcher朝外,右数第111个是thinkerthinkerthinker。
 *
 * thinkerthinkerthinker朝外, 左数第222个是writewritewriter。
 *
 * 所以眼镜藏在writerwriterwriter这里!
 *
 * 虽然成功找回了眼镜, 但小南并没有放心。 如果下次有更多的玩具小人藏他的眼镜, 或是谜題的长度更长, 他可能就无法找到眼镜了 。 所以小南希望你写程序帮他解决类似的谜題。 这样的谜題具体可以描述为:
 *
 * 有 nnn个玩具小人围成一圈, 已知它们的职业和朝向。现在第111个玩具小人告诉小南一个包含mmm条指令的谜題, 其中第 zzz条指令形如“左数/右数第s ss,个玩具小人”。 你需要输出依次数完这些指令后,到达的玩具小人的职业。
 * 输入格式
 *
 * 输入的第一行包含两个正整数 n,mn,mn,m，表示玩具小人的个数和指令的条数。
 *
 * 接下来 nnn 行，每行包含一个整数和一个字符串，以逆时针为顺序给出每个玩具小人的朝向和职业。其中 000 表示朝向圈内，111 表示朝向圈外。 保证不会出现其他的数。字符串长度不超过 101010 且仅由小写字母构成，字符串不为空，并且字符串两两不同。整数和字符串之间用一个空格隔开。
 * 接下来 mmm 行，其中第 iii 行包含两个整数 ai,sia_i,s_iai​,si​，表示第 iii 条指令。若 ai=0a_i=0ai​=0，表示向左数 sis_isi​ 个人；若 ai=1a_i=1ai​=1，表示向右数 sis_isi​ 个人。 保证 aia_iai​ 不会出现其他的数，1≤si<n1 \le s_i < n1≤si​<n。
 * 输出格式
 * 输出一个字符串，表示从第一个读入的小人开始，依次数完 mmm 条指令后到达的小人的职业。
 */

struct CL{
    string ch;
    bool  direct;
    //朝内为0, 朝外为1
    CL *left;
    CL *right;
};

int P1563(void){
    int n,m;


    cin>>n>>m;
    CL *setd =new CL[n];

    for (int i =0; i<n;i++){
        cin >> setd[i].direct>>setd[i].ch;
//        if(i==(n-1)){
//            setd[i].right = &setd[0];
//        }else{
//            setd[i].right = &setd[i+1];
//
//        }
//        if(i == 0){
//            setd[0].left = &setd[n-1];
//        }else{
//            setd[i].left = &setd[i-1];
//        }

    }
    // 左数为0 ,右数为1
    bool directS;
    int steps;

    CL *t  = &setd[0];



/*     for(int i =0;i<m;i++){
 *         cin>>directS>>steps;
 *         if(directS){
 *             if(t->direct){
 *                 for(int j=0; j< steps;j++)
 *                     t = t->left;
 *             }else{
 *                  for(int j=0; j< steps;j++)
 *                     t = t->right;
 *             }
 *         }else{
 *             if(t->direct){
 *                 for(int j=0; j< steps;j++)
 *                     t = t->right;
 *             }else{
 *                 for(int j=0; j <steps;j++)
 *                     t = t->left;
 *             }
 *         }
 *     }
 */
    int h = 0;//记录当时的位置
    for(int i=0; i<m;i++){
        cin>>directS>>steps;
        if(setd[h].direct){
            if(directS){
                h=(h-steps)>-1?(h-steps):n-(steps-h);
            }else{
                h = (h+steps)<n? (h+steps):(steps-n+h);
            }
        }else{
            if(directS){
                h = (h+steps)<n? (h+steps):(steps-n+h);
            }else{
                h=(h-steps)>-1?(h-steps):n-(steps-h);
            }
        }
    }
    cout<< setd[h].ch;


    return 0;
}
