#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string imie, nazwisko;
    int wiek;
    ifstream plik("dane.txt");
    while (plik >> imie >> nazwisko >> wiek) {
        cout << "Imię: " << imie << ", Nazwisko: " << nazwisko << ", Wiek: " << wiek << endl;
    }
    plik.close();
    return 0;
}


