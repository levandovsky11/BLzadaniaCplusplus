#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


void LosujTablice(int* tab, int rozmiar) {
    for (int i = 0; i < rozmiar; i++) {
        tab[i] = rand() % 51;
    }
}


bool SprawdzLiczbe(int* tab, int rozmiar, int* liczba) {
    for (int i = 0; i < rozmiar; i++) {
        if (tab[i] == *liczba) {
            return true;
        }
    }
    return false;
}


int main() {
    srand(time(NULL));

    const int N = 10;
    int tablica[N];
    LosujTablice(tablica, N);

    cout << "Tablica: ";
    for (int i = 0; i < N; i++) {
        cout << tablica[i];
        if (i < N - 1) cout << ", ";
    }
    cout << endl;

    int proby = 0;
    int zgadywana;

    do {
        cout << "Podaj liczbe: ";
        cin >> zgadywana;
        proby++;
        if (SprawdzLiczbe(tablica, N, &zgadywana)) {
            cout << "Zgadles!" << endl;
            break;
        }
        else {
            cout << "Nie zgadles" << endl;
        }
    } while (true);

    cout << "Zgadles za " << proby << " razem." << endl;
    return 0;
}









