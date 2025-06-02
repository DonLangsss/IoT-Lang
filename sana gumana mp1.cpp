#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    float kilometers;
    float nauticalMiles;
    const float KM_TO_NM = 0.539957;
    string answer;

    do {
        // Prompt for the user's name
        cout << "Enter your name: ";
        cin >> name;

        // Prompt for the distance in kilometers
        cout << "Enter distance in kilometers: ";
        cin >> kilometers;

        // Convert kilometers to nautical miles
        nauticalMiles = kilometers * KM_TO_NM;
        cout << kilometers << " km is approximately " << nauticalMiles << " nautical miles." << endl;

        // Ask if the user wants to continue
        cout << "Do you want to continue? (yes/no): ";
        cin >> answer;

    } while (answer == "yes" || answer == "y");

  cout << "Thank you. " << endl;

    return 0;
}