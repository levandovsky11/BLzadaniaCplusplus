#include <iostream>
#include <string>
using namespace std;

string tekstOdUzytkownika() {
    string tekst;
    cout << "Podaj ciag znakow: ";
    getline(cin, tekst);
    return tekst;
}

string odwrocTekst(string tekst) {
    string odwrocony = "";
    for (int i = tekst.length() - 1; i >= 0; i--) {
        odwrocony += tekst[i];
    }
    return odwrocony;
}

void wynik(const string& wynik) {
    cout << "Odwrocony ciag: " << wynik << endl;
}

int main() {
    string tekst = tekstOdUzytkownika();
    string odwrocony = odwrocTekst(tekst);
    wynik(odwrocony);
    return 0;
}



