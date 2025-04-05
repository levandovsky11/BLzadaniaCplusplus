#include <iostream>
#include <string>
using namespace std;

int main() {
    string ciag;
    cout << "Podaj ciag znakow: " << endl;
    getline(cin, ciag);

    char znak;
    cout << "Podaj znak do zliczenia: " << endl;
    cin >> znak;

    int licznik = 0;
    cout << "Pozycje wystapien: ";
    bool pierwsza = true;
    for (int i = 0; i < ciag.size(); i++) {
        if (ciag[i] == znak) {
            licznik++;
            if (!pierwsza)
                cout << ", ";
            cout << i + 1;
            pierwsza = false;
        }
    }
    cout << "\nLiczba wystapien znaku '" << znak << "': " << licznik << endl;
    return 0;
}











