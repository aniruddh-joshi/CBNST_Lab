#include<bits/stdc++.h>
using namespace std;

#define MAXN 100

int main() {
    float ax[MAXN + 1], ay[MAXN + 1];
    float x, y = 0;

    int n;

    cout << "Enter the value of n: ";
    cin >> n;

    cout << "Enter the set of values:" << endl;

    for (int i = 0; i <= n; i++)
        cin >> ax[i] >> ay[i];

    cout << "Enter the value of x for which the value of y is wanted: ";
    cin >> x;
    cout << fixed;

    for (int i = 0; i <= n; i++) {
        float term = ay[i];
        for (int j = 0; j <= n; j++) {
            if (j != i) {
                term *= (x - ax[j]) / (ax[i] - ax[j]);
            }
        }
        y += term;
    }

    cout << "When x=" << setw(4) << setprecision(1) << x;
    cout << " y=" << setw(7) << setprecision(1) << y << endl;

    return 0;
}


//OUTPUT
Enter the value of n
4
Enter the set of values
5 152
7 390
11 1400
13 2300
17 5200
Enter the value of x for which value of y is wanted
9
When x= 9.0y= 784.4
