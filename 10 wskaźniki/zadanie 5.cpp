#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


void LosujTablicePrzedzial(int* tab, int ile, int poczatek, int koniec) {
    for (int i = 0; i < ile; i++) {
        tab[i] = poczatek + rand() % (koniec - poczatek + 1);
    }
}


bool SprawdzLiczbe(int* tab, int ile, int* liczba) {
    for (int i = 0; i < ile; i++) {
        if (tab[i] == *liczba) return true;
    }
    return false;
}

int main() {
    srand(time(NULL));

    int ile, poczatek, koniec;
    cout << "Ile liczb chcesz wylosowac? ";
    cin >> ile;
    cout << "Wartosc poczatkowa: ";
    cin >> poczatek;
    cout << "Wartosc koncowa: ";
    cin >> koniec;

    int* tablica = new int[ile];
    LosujTablicePrzedzial(tablica, ile, poczatek, koniec);



    cout << "Tablica: ";
    for (int i = 0; i < ile; i++) {
        cout << tablica[i];
        if (i < ile - 1) cout << ", ";
    }
    cout << endl;

    int proby = 0;
    int zgadywana;
    do {
        cout << "Podaj liczbe: ";
        cin >> zgadywana;
        proby++;
        if (SprawdzLiczbe(tablica, ile, &zgadywana)) {
            cout << "Zgadles!" << endl;
            break;
        }
        else {
            cout << "Nie zgadles" << endl;
        }
    } while (true);

    cout << "Zgadles za " << proby << " razem." << endl;

    delete[] tablica;
    return 0;
}





