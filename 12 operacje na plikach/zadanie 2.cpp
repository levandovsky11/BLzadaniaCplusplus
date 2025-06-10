#include <iostream>
#include <fstream>
#include <cstdio>
#include <string>
using namespace std;

int main() {
    cout << "Wybierz operacje:" << endl;
    cout << "1 - Utworz nowy plik" << endl;
    cout << "2 - Usun plik" << endl;
    cout << "3 - Zmien nazwe pliku" << endl;
    cout << "Twoj wybor: ";
    int wybor;
    cin >> wybor;
    if (wybor == 1) {
        cout << "Podaj nazwe nowego pliku: ";
        string nazwa;
        cin >> nazwa;
        ofstream nowy(nazwa);
        nowy.close();
        cout << "Plik '" << nazwa << "' zostal utworzony." << endl;
    }
    else if (wybor == 2) {
        cout << "Podaj nazwe pliku do usuniecia: ";
        string nazwa;
        cin >> nazwa;
        ifstream test(nazwa);
        if (test) {
            test.close();
            remove(nazwa.c_str());
            cout << "Plik '" << nazwa << "' zostal usuniety." << endl;
        }
        else {
            cout << "Plik '" << nazwa << "' nie istnieje." << endl;
        }
    }
    else if (wybor == 3) {
        cout << "Podaj nazwe pliku do zmiany: ";
        string stara, nowa;
        cin >> stara;
        ifstream test(stara);
        if (test) {
            test.close();
            cout << "Podaj nowa nazwe pliku: ";
            cin >> nowa;
            if (rename(stara.c_str(), nowa.c_str()) == 0) {
                cout << "Plik zostal pomyslnie zmieniony na '" << nowa << "'." << endl;
            }
            else {
                cout << "error przy zmianie nazwy pliku." << endl;
            }
        }
        else {
            cout << "error 404: Plik '" << stara << "' nie istnieje." << endl;
        }
    }
    else {
        cout << "Nieprawidlowy wybor." << endl;
    }
    return 0;
}













