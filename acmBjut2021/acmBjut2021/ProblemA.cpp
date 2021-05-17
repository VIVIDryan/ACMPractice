#include <iostream>
#include <cmath>

using namespace std;
int countOnes1(unsigned int n){
    int counts =0;
    while (0<n)
    {
        counts++;
        n &=(n-1);
    }
    return counts;

}

int main(){
    int N;
    unsigned int l,r;
    cin>>N;
    int i=0;

    while(i++<N){
        cin>>l>>r;
        unsigned int max;
        unsigned int max2;
        max =0;
        max2=0;
        max2 = countOnes1(r);

        for (int j=r;j>=l;j--){
            if(countOnes1(j)>=max2)
            {max = j;max2 = countOnes1(j);}
        }

        cout<<max;
        if(i<N)
        cout<<endl;
    }
    return 0;
}
