#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "podaj pierwsza liczbe: ";
    cin >> a;
    cout << "podaj druga liczbe: ";
    cin >> b;
    cout << "suma: " << (a + b) << endl;
    cout << "roznica: " << (a - b) << endl;
    cout << "iloczyn: " << (a * b) << endl;
    cout << "iloraz: " << (a / b) << endl;
    cout << "reszta z dzielenia: " << (a % b) << endl;
    return 0;
}