#include <iostream>
using namespace std;

bool czyParzysta(int n) {
    return n % 2 == 0;
}

int main() {
    int liczba;
    cout << "Podaj liczbe calkowita: " << endl;
    cin >> liczba;
    if (czyParzysta(liczba))
        cout << "Liczba " << liczba << " jest parzysta." << endl;
    else
        cout << "Liczba " << liczba << " jest nieparzysta." << endl;
    return 0;
}


