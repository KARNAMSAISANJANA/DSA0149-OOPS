#include <iostream>

using namespace std;

int main() {
    int n; // size of square
    cout << "Enter the size of square: ";
    cin >> n;

    // Square star pattern
    cout << "Square star pattern:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    // Rectangle dollar pattern
    int rows, cols;
    cout << "\nEnter the number of rows and columns of rectangle: ";
    cin >> rows >> cols;
    cout << "Rectangle dollar pattern:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "$ ";
        }
        cout << endl;
    }

    return 0;
}

