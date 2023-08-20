#include <iostream>
#include <cmath>

using namespace std;

double calculateAbsoluteError(double trueValue, double approxValue) {
    return abs(trueValue - approxValue);
}

double calculateRelativeError(double trueValue, double approxValue) {
    return abs((trueValue - approxValue) / trueValue);
}

double calculatePercentageError(double trueValue, double approxValue) {
    return calculateRelativeError(trueValue, approxValue) * 100.0;
}

int main() {
    double trueValue, approxRoundoff, approxTruncation;

    cout << "Enter the true value: ";
    cin >> trueValue;

    cout << "Enter the approximated value using roundoff: ";
    cin >> approxRoundoff;

    cout << "Enter the approximated value using truncation: ";
    cin >> approxTruncation;
    
    double absoluteErrorRoundoff = calculateAbsoluteError(trueValue, approxRoundoff);
    double relativeErrorRoundoff = calculateRelativeError(trueValue, approxRoundoff);
    double percentageErrorRoundoff = calculatePercentageError(trueValue, approxRoundoff);
    
    double absoluteErrorTruncation = calculateAbsoluteError(trueValue, approxTruncation);
    double relativeErrorTruncation = calculateRelativeError(trueValue, approxTruncation);
    double percentageErrorTruncation = calculatePercentageError(trueValue, approxTruncation);
    
    cout << "For Roundoff:" << endl;
    cout << "Absolute Error: " << absoluteErrorRoundoff << endl;
    cout << "Relative Error: " << relativeErrorRoundoff << endl;
    cout << "Percentage Error: " << percentageErrorRoundoff << "%" << endl;
    
    cout << "For Truncation:" << endl;
    cout << "Absolute Error: " << absoluteErrorTruncation << endl;
    cout << "Relative Error: " << relativeErrorTruncation << endl;
    cout << "Percentage Error: " << percentageErrorTruncation << "%" << endl;
    
    return 0;
}
