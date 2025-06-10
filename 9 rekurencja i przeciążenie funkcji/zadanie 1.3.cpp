#include <iostream>
using namespace std;

long long potegaRekurencyjnie(long long podstawa, int wykladnik) {
    if (wykladnik == 0)
        return 1;
    else
        return podstawa * potegaRekurencyjnie(podstawa, wykladnik - 1);
}

void wyswietlPotega(long long podstawa, int wykladnik, long long wynik) {
    cout << podstawa << " do potegi " << wykladnik
        << " wynosi: " << wynik << endl;
}

int main() {
    long long podstawa;
    int wykladnik;

    cout << "Podaj liczbe podstawowa: ";
    cin >> podstawa;
    cout << "Podaj wykladnik: ";
    cin >> wykladnik;

    long long wynik = potegaRekurencyjnie(podstawa, wykladnik);
    wyswietlPotega(podstawa, wykladnik, wynik);

    return 0;
}








