#include <iostream>
using namespace std;

int pobierzLiczbeElementow() {
    int ile;
    cout << "Podaj liczbe elementow: ";
    cin >> ile;
    return ile;
}

int fiboRekurencyjnie(int i) {
    if (i <= 1)
        return 1;
    else
        return fiboRekurencyjnie(i - 1) + fiboRekurencyjnie(i - 2);
}

void wyswietlFibo(int ile) {
    cout << "Ciag Fibonacciego: ";
    for (int i = 0; i < ile; i++) {
        cout << fiboRekurencyjnie(i);
        if (i < ile - 1) cout << ", ";
    }
    cout << endl;
}

int main() {
    int ile = pobierzLiczbeElementow();
    wyswietlFibo(ile);
    return 0;
}





