#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

// Declare second integer, double, and String variables.
    int a;
    double b;
    string c;
    string tmp;
    // Read and save an integer, double, and String to your variables.
    getline(cin, tmp);
    a = stoi(tmp);

    getline(cin, tmp);
    b = stod(tmp);

    getline(cin, c);
    // Print the sum of both integer variables on a new line.
    cout << a+i << endl;
    // Print the sum of the double variables on a new line.
    printf("%.1f\n", d + b);
        // Concatenate and print the String variables on a new line
    cout << s + c << endl;
    // The 's' variable above should be printed first.

    return 0;