#include <iostream>
using namespace std;

int ObliczSume(int* tab, int rozmiar) {
    int suma = 0;
    for (int i = 0; i < rozmiar; i++) {
        suma += tab[i];
    }
    return suma;
}

int main() {
    const int N = 4;
    int tablica[N] = { 5, 15, 10, 20 };

    int suma = ObliczSume(tablica, N);
    cout << "Suma elementow tablicy: " << suma << endl;

    for (int i = 0; i < N; i++) {
        cout << "Podaj nowa wartosc dla elementu " << i << ": ";
        cin >> tablica[i];
    }

    cout << "Nowa tablica:" << endl;
    for (int i = 0; i < N; i++) {
        cout << tablica[i] << " ";
    }
    cout << endl;

    int nowaSuma = ObliczSume(tablica, N);
    cout << "Nowa suma elementow tablicy: " << nowaSuma << endl;

    return 0;
}




