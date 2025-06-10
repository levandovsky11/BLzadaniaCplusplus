#include <iostream>
using namespace std;

int pobierzLiczbe() {
    int n;
    cout << "Podaj liczbe: ";
    cin >> n;
    return n;
}

int sumaRekurencyjna(int n) {
    if (n <= 1)
        return n;
    else
        return n + sumaRekurencyjna(n - 1);
}

void wyswietlSume(int n, int s) {
    cout << "Suma liczb od 1 do " << n << " wynosi: " << s << endl;
}

int main() {
    int liczba = pobierzLiczbe();
    int wynik = sumaRekurencyjna(liczba);
    wyswietlSume(liczba, wynik);
    return 0;
}



