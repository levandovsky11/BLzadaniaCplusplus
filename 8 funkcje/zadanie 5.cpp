#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void duzaMala(int liczba, int wylosowanaLiczba) {
    if (liczba < wylosowanaLiczba)
        cout << "Za malo" << endl;
    else if (liczba > wylosowanaLiczba)
        cout << "Za duzo" << endl;
}

bool sprawdzLiczbe(int liczba, int wylosowanaLiczba) {
    return liczba == wylosowanaLiczba;
}

int main() {
    srand(time(NULL));
    int wylosowanaLiczba = rand() % 100 + 1;
    int liczba;
    
    do {
        cout << "Podaj liczbe: ";
        cin >> liczba;
        if (sprawdzLiczbe(liczba, wylosowanaLiczba)) {
            cout << "Gratulacje! Odgadles liczbe." << endl;
        }
        else {
            duzaMala(liczba, wylosowanaLiczba);
        }
    } while (!sprawdzLiczbe(liczba, wylosowanaLiczba));

    return 0;
}










