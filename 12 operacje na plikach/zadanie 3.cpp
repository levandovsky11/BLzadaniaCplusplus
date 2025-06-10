#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Osoba {
    string imie;
    string nazwisko;
    int wiek;
};

int main() {
    ifstream test("dane.txt");
    if (!test) {
        ofstream plik("dane.txt");
        plik << "Jan Kowalski 25" << endl;
        plik << "Anna Nowak 30" << endl;
        plik.close();
        cout << "Plik dane.txt nie istnieje. Tworzenie pliku i zapis przykladowych danych..." << endl;
    }
    else {
        test.close();
    }
    cout << "Czy chcesz dodac nowa osobe? (t/n): ";
    char odp;
    cin >> odp;
    if (odp == 't') {
        Osoba o;
        cout << "Podaj imie: ";
        cin >> o.imie;
        cout << "Podaj nazwisko: ";
        cin >> o.nazwisko;
        cout << "Podaj wiek: ";
        cin >> o.wiek;
        ofstream dopisz("dane.txt", ios::app);
        dopisz << o.imie << " " << o.nazwisko << " " << o.wiek << endl;
        dopisz.close();
    }
    ifstream odczyt("dane.txt");
    string im, naz;
    int w;
    cout << endl << "Dane w pliku po dopisaniu:" << endl;
    while (odczyt >> im >> naz >> w) {
        cout << "Imie: " << im << ", Nazwisko: " << naz << ", Wiek: " << w << endl;
    }
    odczyt.close();
    return 0;
}





