#include <iostream>
#include <string>
using namespace std;

int main() {
    string imie;
    int wiek;

    cout << "podaj imie: ";
    cin >> imie;
    cout << "podaj wiek: ";
    cin >> wiek;

    cout << "witaj, " << imie << "! masz " << wiek << " lat." <<endl;

    return 0;
}