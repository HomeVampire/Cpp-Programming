#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
float rec(float ub, float lb, float n){

    float mid=(ub+lb)/2;
    float temp=mid*mid;
    float temp2=fabs(temp-n);

    if((temp==n)||(temp2<0.00001))
        return mid;
    else if(temp>n)
        return rec(mid, lb, n);
    else
        return rec(ub, mid, n);
}
float square_root(float n){
    int flag=0;
    float i=0;
    while(flag==0){
        if((i*i)==n){
            flag=1;
            return i;
        }
        else if((i*i)>n){
            flag=1;
            float temp=rec(i, i-1, n);
            return temp;
        }
        i++;
    }
}
int main(){
    float n;
    cout<<"Enter a number:";
    cin>>n;
    float temp=square_root(n);
    cout<<temp;
    return 0;
}
