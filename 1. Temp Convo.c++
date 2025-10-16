#include <iostream>
using namespace std;

int main() {
    int choice;
    double temp, c, f, k;

    cout << "=== Temperature Converter ===\n";
    cout << "1. Celsius to Fahrenheit & Kelvin\n";
    cout << "2. Fahrenheit to Celsius & Kelvin\n";
    cout << "3. Kelvin to Celsius & Fahrenheit\n";

    cout << "Enter your choice: ";
    cin >> choice;
    cout << "Enter temperature value: ";
    cin >> temp;

    switch(choice) {
        case 1:
            f = (temp * 9.0/5.0) + 32;
            k = temp + 273.15;
            cout << "Fahrenheit: " << f << endl;
            cout << "Kelvin: " << k << endl;
            break;
        case 2:
            c = (temp - 32) * 5.0/9.0;
            k = c + 273.15;
            cout << "Celsius: " << c << endl;
            cout << "Kelvin: " << k << endl;
            break;
        case 3:
            c = temp - 273.15;
            f = (c * 9.0/5.0) + 32;
            cout << "Celsius: " << c << endl;
            cout << "Fahrenheit: " << f << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}