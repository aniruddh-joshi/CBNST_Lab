#include<iostream>
using namespace std;

int main() {
    int x[10], y[10], n, k;

    cout << "Enter the number of observations: ";
    cin >> n;

    cout << "Enter the different values of x: ";
    for (int i = 1; i <= n; i++) {
        cin >> x[i];
    }

    cout << "Enter the corresponding values of y: ";
    for (int i = 1; i <= n; i++) {
        cin >> y[i];
    }

    cout << "Enter the value of 'k' for f(k) evaluation: ";
    cin >> k;

    int f = y[1];
    int f1 = 1;
    int f2 = 0;

    for (int j = 1; j <= n - 1; j++) {
        for (int i = 1; i <= n - j; i++) {
            y[i] = (y[i + 1] - y[i]) / (x[i + j] - x[i]);
        }
        f1 *= (k - x[j]);
        f2 += (y[1] * f1);
    }

    f += f2;

    cout << "f(" << k << ") = " << f << endl;

    return 0;
}


//OUTPUT:
Enter the number of observations: 5
Enter the different values of x: 5 7 11 13 17
Enter the corresponding values of y: 150 390 1450 2366 5200
Enter the value of 'k' for f(k) evaluation: 9
f(9) = 806
