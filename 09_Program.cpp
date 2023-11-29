#include<bits/stdc++.h>
using namespace std;

// Function to calculate the value of y(x)
float y(float x) {
    return 1 / (1 + x * x);
}

int main() {
    float x0, xn, h, s;
    int n;

    cout << "Enter the lower limit (x0), upper limit (xn), and the number of subintervals: ";
    cin >> x0 >> xn >> n;

    cout << fixed;

    h = (xn - x0) / n;
    s = y(x0) + y(xn);

    for (int i = 1; i <= n - 1; i++) {
        s += 2 * y(x0 + i * h);
    }

    cout << "Value of the integral is: ";
    cout << setw(6) << setprecision(4) << (h / 2) * s << endl;

    return 0;
}


//OUTPUT
Enter the lower limit (x0), upper limit (xn), and the number of subintervals: 0 6 6
Value of the integral is: 1.4108
