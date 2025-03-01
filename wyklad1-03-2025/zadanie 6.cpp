#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "podaj pierwsza liczbe: ";
    cin >> a;
    cout << "podaj druga liczbe: ";
    cin >> b;
    int suma = a + b;
    cout << "suma: " << suma << endl;
    if (suma % 2 == 0) {
        cout << "suma jest liczba parzysta." << endl;
    }
    else {
        cout << "suma jest liczba nieparzysta." << endl;
    }
    return 0;
}
