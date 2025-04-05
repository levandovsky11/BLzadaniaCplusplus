#include <iostream>
using namespace std;

void tablice(int tablica[], int rozmiar) {
    for (int i = 0; i < rozmiar; i++) {
        cout << "Podaj liczbe nr " << i + 1 << ": " << endl;
        cin >> tablica[i];
    }
}

int maxWartosc(int tablica[], int rozmiar) {
    int maksymalna = tablica[0];
    for (int i = 1; i < rozmiar; i++) {
        if (tablica[i] > maksymalna) {
            maksymalna = tablica[i];
        }
    }
    return maksymalna;
}

void wynik(int maksymalna) {
    cout << "Najwieksza liczba: " << maksymalna << endl;
}

int main() {
    const int ROZMIAR = 5;
    int tablica[ROZMIAR];

    tablice(tablica, ROZMIAR);
    int maksymalna = maxWartosc(tablica, ROZMIAR);
    wynik(maksymalna);

    return 0;
}






