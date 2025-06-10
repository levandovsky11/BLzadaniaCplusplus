#include <iostream>
using namespace std;


double obliczObjetosc(double bok) {
    return bok * bok * bok;
}

double obliczObjetosc(double dlugosc, double szerokosc, double wysokosc) {
    return dlugosc * szerokosc * wysokosc;
}

double obliczObjetosc(double promien, double wysokosc) {
    const double pi = 3.1415;
    return pi * promien * promien * wysokosc;
}

void wyswietlObjetosc(double objetosc) {
    cout << "Objetosc wynosi: " << objetosc << endl;
}


int main() {
    cout << "Wybierz bryle do obliczenia objetosci:\n";
    cout << "1 - Szescian (V = a^3)\n";
    cout << "2 - Prostopadloscian (V = a * b * h)\n";
    cout << "3 - Walec (V = pi * r^2 * h)\n";
    cout << "Wybierz numer bryly: ";

    int wybor;
    cin >> wybor;

    double wynik = 0.0;

    if (wybor == 1) {
        double bok;
        cout << "Podaj dlugosc boku: ";
        cin >> bok;
        wynik = obliczObjetosc(bok);
    }
    else if (wybor == 2) {
        double a, b, h;
        cout << "Podaj dlugosc: ";
        cin >> a;
        cout << "Podaj szerokosc: ";
        cin >> b;
        cout << "Podaj wysokosc: ";
        cin >> h;
        wynik = obliczObjetosc(a, b, h);
    }
    else if (wybor == 3) {
        double r, h;
        cout << "Podaj promien podstawy: ";
        cin >> r;
        cout << "Podaj wysokosc: ";
        cin >> h;
        wynik = obliczObjetosc(r, h);
    }
    else {
        cout << "Nieprawidlowy wybor!" << endl;
        return 1;
    }

    wyswietlObjetosc(wynik);
    return 0;
}









