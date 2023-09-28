#include <bits/stdc++.h>
using namespace std;

int main()
{
    double arr[10][10];
    int n;
    cout << "Enter no. of rows: ";
    cin >> n;

    cout << "ENTER VALUE OF X: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i][0];
    }

    cout << "ENTER VALUE OF Y: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i][1];
    }

    int x;
    cout << "ENTER THE VALUE TO PREDICT: ";
    cin >> x;

    for (int j = 2; j <= n; j++) {
        for (int i = n - 1; i >= j - 1; i--) {
            arr[i][j] = arr[i][j - 1] - arr[i - 1][j - 1];
        }
    }

    cout << "PRINTING THE DIFFERENCE TABLE:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    double y = arr[n - 1][1];

    cout << "y = " << y << endl;

    double u = (x - arr[n - 1][0]) / (arr[1][0] - arr[0][0]);

    cout << "u = " << u << endl;

    double u1 = u;

    int fact = 1;

    for (int i = 2; i <= n; i++) {
        y = y + ((u1 * (u + 1) / i) * arr[n - 1][i]) / fact;
        u1 = u1 * (u - (i - 1));
    }

    cout << "Desired value: " << y << endl;

    return 0;
}
