#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n][n+1];
    for(int i=0;i<n;i++){
            cout<<"Enter the Year = ";
            cin>>arr[i][0];
            cout<<"Enter the population = ";
            cin>>arr[i][1];
    }
    for(int i=2;i<=n;i++){
        for(int j=0;j<n-i+1;j++){
            arr[j][i] = arr[j+1][i-1]-arr[j][i-1];
        }
    }
    // cout<<"\n\nyear\tpopulation\ty1\ty2\ty3\ty4\n\n";
    cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i+1;j++){
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }
    int y;
    cout<<"enter the value in which you want to predict = ";
    cin>>y;
    double u = (y-arr[0][0])/10.0;
    cout<<u<<endl;
    double ans = u;
    double x = arr[0][1];
    int fact = 1;
    for(int i=2;i<n+1;i++){
        x+=(ans*arr[0][i])/fact;
        fact*=i;
        ans*=(u-(i-1));
    }
    cout<<x<<endl;
}

/*
5
1891 46 1901 66 1911 81 1921 93 1931 101
*/
