#include <iostream>
using namespace std;

double suma(double a, double b) {
    return a + b;
}

double roznica(double a, double b) {
    return a - b;
}

double iloczyn(double a, double b) {
    return a * b;
}

double iloraz(double a, double b) {
    if (b != 0)
        return a / b;
    else {
        cout << "Blad: dzielenie przez 0!" << endl;
        return 0;
    }
}

int main() {
    int wybor;
    do {
        cout << "Wybierz funkcje:" << endl;
        cout << "1. Suma" << endl;
        cout << "2. Roznica" << endl;
        cout << "3. Iloczyn" << endl;
        cout << "4. Iloraz" << endl;
        cout << "0. Wyjscie" << endl;
        cout << "Wybrana funkcja: ";
        cin >> wybor;

        if (wybor == 0) {
            cout << "Koniec programu." << endl;
            break;
        }

        double a, b;
        cout << "Podaj pierwsza liczbe: ";
        cin >> a;
        cout << "Podaj druga liczbe: ";
        cin >> b;

        double wynik;
        switch (wybor) {
        case 1:
            wynik = suma(a, b);
            cout << "Wynik: " << wynik << endl;
            break;
        case 2:
            wynik = roznica(a, b);
            cout << "Wynik: " << wynik << endl;
            break;
        case 3:
            wynik = iloczyn(a, b);
            cout << "Wynik: " << wynik << endl;
            break;
        case 4:
            wynik = iloraz(a, b);
            cout << "Wynik: " << wynik << endl;
            break;
        default:
            cout << "error nie ma takiej opcji" << endl;
        }

        cout << endl;
    } while (wybor != 0);

    return 0;
}






