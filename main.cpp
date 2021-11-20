/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Judah Libera
 */

#include "header.h";

using namespace std;

void calc(double a, double b, double c){
double res = 0;
double res2 = 0;
    res = (b * -1 + sqrt((pow(b, 2) - 4*a*c))) / (2 * a);
    res2 = (b * -1 - sqrt((pow(b, 2) - 4*a*c))) / (2 * a);
    cout << "x = " << res << " and " << res2 << endl;
}

int main() {
    double a = 0, b = 0, c = 0;
    cout << "Enter a then b then c using the form ax^2 + bx + c = 0." << endl;
    cin >> a;
    cin >> b;
    cin >> c;
    if ((pow(b, 2) - 4*a*c) < 0)
        cout << "negative sqrt error." << endl;
    else
        calc(a, b, c);
    return 0;
}
