#include <iostream>
using namespace std;

int main() {
    char choice = 'y';

    while (choice == 'y' || choice == 'Y') {
        double temp;
        string unit;

        cout << "Please enter the numerical value of the temperature: ";
        cin >> temp;
        cout << "Please enter the units (e.g., Celsius, Fahrenheit, Kelvin): ";
        cin.ignore();
        getline(cin, unit);

        if (unit == "Celsius") {
            double fahr = (temp * 9 / 5) + 32;
            double kelv = temp + 273.15;
            cout << "The temperature in Fahrenheit is " << fahr << " degrees Fahrenheit." << endl;
            cout << "The temperature in Kelvin is " << kelv << " Kelvin." << endl;
        }

        if (unit == "Fahrenheit") {
            double cels = (temp - 32) * 5 / 9;
            double kelv = ((temp - 32) * 5 / 9) + 273.15;
            cout << "The temperature in Celsius is " << cels << " degrees Celsius." << endl;
            cout << "The temperature in Kelvin is " << kelv << " Kelvin." << endl;
        }

        if (unit == "Kelvin") {
            double cels = temp - 273.15;
            double fahr = ((temp - 273.15) * 9 / 5) + 32;
            cout << "The temperature in Celsius is " << cels << " degrees Celsius." << endl;
            cout << "The temperature in Fahrenheit is " << fahr << " degrees Fahrenheit." << endl;
        }

        cout << "Do you want to convert another temperature? (y/n): ";
        cin >> choice;
    }

    cout << "Thank you for using the temperature conversion tool!" << endl;

    return 0;
}
