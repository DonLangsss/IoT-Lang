#include <iostream>
#include <string>

using namespace std;

int main() {
    string username;
    string password;
    int attemptCount = 0;
     int maxAttempts = 3;

    // Loop for login attempts
    while (attemptCount < maxAttempts) {
        cout << "Enter your username: ";
        cin >> username;
        cout << "Enter your password: ";
        cin >> password;

        // this is the user and pass
        if (username == "don" && password == "lang") {
            cout << "Access granted.\n";

            // Display ASCII art using raw string literal
            cout << R"(
     ···································
     : ___    _____   _          _     :
     : :|_ _|__|_   _| | |    __ _| |__  :
     : : | |/ _ \| |   | |   / _` | '_ \ :
     : : | | (_) | |   | |__| (_| | |_) |:
     : :|___\___/|_|   |_____\__,_|_.__/ :
     ···································
            )" << endl;//R" for delimiter of character
            break;
        } else {
            cout << "Incorrect username/password combination. Please try again.\n";// notification if you input incorrect user and pass
            attemptCount++;
            if (attemptCount == maxAttempts) {
                cout << "Maximum login attempts reached. Access denied.\n";
            }
        }
    }

    return 0;
}