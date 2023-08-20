#include<bits/stdc++.h>
using namespace std;
#define f(x) x*x-2*x-1  //change function as per equation

int main(){
    float x0,x1,x2;
    cout<<"Enter values of x0 and x1: "<<endl;
    cin>>x0>>x1;
    while(x1-x0>0.0001){
        x2=(x0+x1)/2;
        cout<<"value of x2: "<<endl;
        if(f(x2)<0){
            x0=x2;
        }
        else{
            x1=x2;
        }
    }
    return 0;
}
