#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of data points: ";
    cin >> n;

    int arr[n][n + 1];
    for (int i = 0; i < n; i++) {
        cout << "Enter the Year = ";
        cin >> arr[i][0];
        cout << "Enter the population = ";
        cin >> arr[i][1];
    }

    // Calculate the backward differences
    for (int i = 2; i <= n; i++) {
        for (int j = 0; j < n - i + 1; j++) {
            arr[j][i] = arr[j + 1][i - 1] - arr[j][i - 1];
        }
    }

    cout << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i + 1; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }

    int y;
    cout << "Enter the value for which you want to predict: ";
    cin >> y;

    double u = (y - arr[n - 1][0]) / (1.0*arr[1][0]-arr[0][0]);
    cout << u << endl;

    double ans = u;
    double x = arr[n - 1][1];
    int fact = 1;

    for (int i = 2; i <= n; i++) {
        x += (ans * arr[n - i][i]) / fact;
        fact *= i;
        ans *= (u + (i - 1));
        
    }

    cout << "Predicted population for year " << y << " is " << fixed<< x << endl;

    return 0;
    
    //1891 46 1901 66 1911 81 1921 93 1931 101
}
