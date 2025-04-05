#include <iostream>
using namespace std;

int wybranaLiczba() {
    int liczba;
    cout << "Podaj liczbe: " << endl;
    cin >> liczba;
    return liczba;
}

unsigned long long obliczSilnie(int liczba) {
    unsigned long long wynik = 1;
    for (int i = 1; i <= liczba; i++) {
        wynik *= i;
    }
    return wynik;
}

void wynik(int liczba, unsigned long long silnia) {
    cout << "Silnia liczby " << liczba << " wynosi: " << silnia << endl;
}

int main() {
    int liczba = wybranaLiczba();
    unsigned long long silnia = obliczSilnie(liczba);
    wynik(liczba, silnia);
    return 0;
}








