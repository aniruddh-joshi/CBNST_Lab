#include<iostream>
#include<iomanip>

using namespace std;

// Function to calculate the value of y(x)
float y(float x) {
    return 1 / (1 + x * x);
}

int main() {
    float x0, xn, h, s;
    int n;

    // Input section
    cout << "Enter the lower limit (x0), upper limit (xn), and the number of subintervals: ";
    cin >> x0 >> xn >> n;
    cout << fixed;

    // Calculation using Simpson's 1/3 rule
    h = (xn - x0) / n;
    s = y(x0) + y(xn);

    for (int i = 1; i <= n - 1; i++) {
        if (i % 2 == 0) {
            s += 2 * y(x0 + i * h);
        } else {
            s += 4 * y(x0 + i * h);
        }
    }

    // Output the result
    cout << "Value of integral using Simpson's 1/3 rule: ";
    cout << setw(6) << setprecision(4) << (h / 3) * s << endl;

    return 0;
}


//OUTPUT
Enter the lower limit (x0), upper limit (xn), and the number of subintervals: 0 6 6
Value of integral using Simpson's 1/3 rule: 1.3662
