#include <iostream>
using namespace std;

int main() {
    const int SIZE = 10;
    int tablica[SIZE];
    cout << "Podaj 10 liczb calkowitych:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << "Podaj liczbe nr " << i + 1 << ": " << endl;
        cin >> tablica[i];
    }
    int najmniejszaLiczba = tablica[0];
    for (int i = 1; i < SIZE; i++) {
        if (tablica[i] < najmniejszaLiczba) {
            najmniejszaLiczba = tablica[i];
        }
    }
    cout << "Najmniejsza liczba to: " << najmniejszaLiczba << endl;
    return 0;
}




