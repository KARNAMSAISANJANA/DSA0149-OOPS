
#include <iostream>
#include <string>

using namespace std;

bool isValidUserName(string username) {
    int length = username.length();
    bool hasUpperCase = false;
    bool hasLowerCase = false;
    bool hasDigit = false;
    bool hasSpecialChar = false;

    // Check for length
    if (length < 8 || length > 20) {
        return false;
    }

    // Check for allowed characters
    for (int i = 0; i < length; i++) {
        char ch = username[i];
        if (!((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9') || ch == '@' || ch == '.' || ch == '_' || ch == '-')) {
            return false;
        }
    }

    // Check for at least one uppercase letter, lowercase letter, digit, and special character
    for (int i = 0; i < length; i++) {
        char ch = username[i];
        if (ch >= 'a' && ch <= 'z') {
            hasLowerCase = true;
        } else if (ch >= 'A' && ch <= 'Z') {
            hasUpperCase = true;
        } else if (ch >= '0' && ch <= '9') {
            hasDigit = true;
        } else if (ch == '@' || ch == '.' || ch == '_' || ch == '-') {
            hasSpecialChar = true;
        }
    }

    if (hasUpperCase && hasLowerCase && hasDigit && hasSpecialChar) {
        return true;
    } else {
        return false;
    }
}

int main() {
    string username, reusername;

    cout << "Enter the user name: ";
    getline(cin, username);

    cout << "Reenter the user name: ";
    getline(cin, reusername);

    if (username == reusername && isValidUserName(username)) {
        cout << "User name is valid" << endl;
    } else {
        cout << "User name is invalid" << endl;
    }

    return 0;
}

