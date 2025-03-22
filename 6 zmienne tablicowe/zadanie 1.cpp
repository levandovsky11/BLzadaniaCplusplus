#include <iostream>
using namespace std;

int main() {
    int liczby[5];
    int suma = 0;
    for (int i = 0; i < 5; i++) {
        cout << "Podaj liczbe nr " << i + 1 << ": " << endl;
        cin >> liczby[i];
        suma += liczby[i];
    }
    double srednia = static_cast<double>(suma) / 5;
    cout << "Srednia liczb: " << srednia << endl;
    return 0;
}





