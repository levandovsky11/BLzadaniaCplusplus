#include <iostream>
using namespace std;

int main() {
    int szerokosc, wysokosc;
    cout << "Podaj szerokosc: " << endl;
    cin >> szerokosc;
    cout << "Podaj wysokosc: " << endl;
    cin >> wysokosc;

    for (int i = 0; i < wysokosc; i++) {
        int margin = i;
        for (int j = 0; j < szerokosc; j++) {
            if (j >= margin && j < szerokosc - margin)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}
