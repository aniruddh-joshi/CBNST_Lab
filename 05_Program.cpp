#include <bits/stdc++.h>
using namespace std;

int main() {
    double arr[10][10];
    int n;
    cout << "Enter no. of rows  :-> ";
    cin >> n;

    cout << "ENTER VALUE OF X :-> ";
    for( int i = 0; i < n; i++) {
        cin >> arr[i][0];
    }
    cout << "ENTER VALUE OF Y :-> ";
    for( int i = 0; i < n; i++) {
        cin >> arr[i][1];
    }
    
    int x;
    cout << "ENTER THE VALUE TO PREDICT :->";
    cin >> x;

    for( int j = 2; j <= n; j++) {
        for( int i = 0; i <= n-j; i++) {
            arr[i][j] = arr[i+1][j-1] - arr[i][j-1];
        }
    }
    
    cout << "PRINTING THE DIFFERENCE TABLE :->" << endl;;
    for( int i = 0; i < n; i++) {
        for( int j = 0; j <= n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    double y = arr[n/2][1];

    cout << "y = " << y << endl;

    double u = (x - arr[n/2][0]) / (arr[1][0] - arr[0][0]);

    cout << "u = " << u << endl;

    double u1 = u;

    int fact = 1;

    for( int i = 2; i <= n; i++) {
        y = y + (((i/3) * (u+1)) * u1 * arr[n/i][i])/ fact;
        fact = fact * i;
        u1 = u1 * (u-(i-1));
    }

    cout << "Desired value :->" << y << endl;

    return 0;
}

/*
Enter no. of rows  :-> 5
ENTER VALUE OF X :-> 0 4 8 12 16
ENTER VALUE OF Y :-> 14 24 32 35 40
ENTER THE VALUE TO PREDICT :->9
PRINTING THE DIFFERENCE TABLE :->
0 14 10 -2 -3 10 
4 24 8 -5 7 6.92355e-310 
8 32 3 2 0 0 
12 35 5 0 0 0 
16 40 0 0 0 0 
y = 32
u = 0.25
Desired value :->33.0645 */
