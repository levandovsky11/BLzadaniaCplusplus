#include <iostream>
using namespace std;

int main() {
    const int SIZE = 5;
    int tablica[SIZE];
    cout << "Wprowadz 5 liczb calkowitych:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cin >> tablica[i];
    }
    for (int i = 0; i < SIZE; i++) {
        if (tablica[i] < 0) {
            tablica[i] = 0;
        }
    }
    cout << "Liczby ujemne zamienione na 0: ";
    for (int i = 0; i < SIZE; i++) {
        cout << tablica[i];
        if (i < SIZE - 1) {
            cout << ", ";
        }
    }
    return 0;
}





