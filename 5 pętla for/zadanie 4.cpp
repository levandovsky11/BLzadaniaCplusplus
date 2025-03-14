#include <iostream>
using namespace std;

int main() {
    int wiersze, kolumny;
    cout << "Podaj liczbe wierszy: " << endl;
    cin >> wiersze;
    cout << "Podaj liczbe kolumn: " << endl;
    cin >> kolumny;

    int** macierz = new int* [wiersze];
    for (int i = 0; i < wiersze; i++) {
        macierz[i] = new int[kolumny];
    }

    int liczba = 1;
    for (int i = 0; i < wiersze; i++) {
        for (int j = 0; j < kolumny; j++) {
            macierz[i][j] = liczba;
            liczba += 2;
        }
    }

    for (int i = 0; i < wiersze; i++) {
        for (int j = 0; j < kolumny; j++) {
            cout << macierz[i][j] << "\t";
        }
        cout << endl;
    }

    for (int i = 0; i < wiersze; i++) {
        delete[] macierz[i];
    }
    delete[] macierz;

    return 0;
}
