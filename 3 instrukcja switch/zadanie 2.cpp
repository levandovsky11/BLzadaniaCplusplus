#include <iostream>
using namespace std;

int main() {
    double celsius;
    char wybor;
    cout << "Podaj temperature w stopniach Celsjusza: ";
    cin >> celsius;
    cout << "Wybierz jednostke docelowa (K - kelvin, F - Fahrenheit): ";
    cin >> wybor;

    switch (wybor) {
    case 'K': {
        double kelvin = celsius + 273.15;
        cout << "Temperatura w stopniach Kelvina: " << kelvin << endl;
        break;
    }
    case 'F': {
        double fahrenheit = celsius * 9.0 / 5.0 + 32;
        cout << "Temperatura w stopniach Fahrenheita: " << fahrenheit << endl;
        break;
    }
    case 'k': {
        double kelvin = celsius + 273.15;
        cout << "Temperatura w stopniach Kelvina: " << kelvin << endl;
        break;
    }
    case 'f': {
        double fahrenheit = celsius * 9.0 / 5.0 + 32;
        cout << "Temperatura w stopniach Fahrenheita: " << fahrenheit << endl;
        break;
    }
    default:
        cout << "Blad: Nieprawidlowa opcja." << endl;
    }

    return 0;
}
