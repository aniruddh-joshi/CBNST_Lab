#include<bits/stdc++.h>
using namespace std;

// Function representing the ordinary differential equation
float f(float x, float y) {
    return x + y * y;
}

int main() {
    float x0, y0, h, xn, x, y, k1, k2;

    // Input section
    cout << "Enter the initial values (x0, y0), step size (h), and endpoint (xn): ";
    cin >> x0 >> y0 >> h >> xn;

    x = x0;
    y = y0;

    cout << fixed;

    // Runge-Kutta (RK2) method iteration
    while (x < xn) {
        k1 = h * f(x, y);
        k2 = h * f(x + h, y + k1);
        
        y += (k1 + k2) / 2;
        x += h;

        cout << "when x=" << setprecision(4) << setw(8) << x;
        cout << endl << "y=" << setw(8) << y << endl;
    }

    return 0;
}

//OUTPUT
Enter the initial values (x0, y0), step size (h), and endpoint (xn): 0.0 1.0 0.2 0.2
when x=  0.2000
y=  1.2640
