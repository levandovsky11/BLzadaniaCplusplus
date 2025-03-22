#include <iostream>
using namespace std;

int main() {
    const int SIZE = 10;
    int tablica[SIZE];
    int suma = 0;

    for (int i = 0; i < SIZE; i++) {
        cout << "Podaj liczbe nr " << i + 1 << ": " << endl;
        cin >> tablica[i];
    }
    
    cout << "Liczby parzyste: ";
    for (int i = 0; i < SIZE; i++) {
        if (tablica[i] % 2 == 0) {
            cout << tablica[i] << ", ";
            suma += tablica[i];
        }
    }

    cout << endl;
    cout << "Suma liczb parzystych: " << suma << endl;
    return 0;
}









