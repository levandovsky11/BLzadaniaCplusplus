#include <iostream>
using namespace std;

int main() {
    int szerokosc, wysokosc;
    cout << "Podaj szerokosc: " << endl;
    cin >> szerokosc;
    cout << "Podaj wysokosc: " << endl;
    cin >> wysokosc;

    for (int i = 0; i < wysokosc; i++) {
        if (i == 0 || i == wysokosc - 1) {
            for (int j = 0; j < szerokosc; j++) {
                cout << "-";
            }
            cout << endl;
        }
        else {
            cout << "|";
            for (int j = 1; j < szerokosc - 1; j++) {
                if ((i + j) % 2 == 0)
                    cout << "#";
                else
                    cout << "*";
            }
            cout << "|" << endl;
        }
    }

    return 0;
}
