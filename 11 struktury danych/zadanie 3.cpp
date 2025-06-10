#include <iostream>
using namespace std;

struct Samochod {
    string marka;
    string model;
    int rok_produkcji;
};

void WyswietlDane(Samochod s) {
    cout << "Dane samochodu:" << endl;
    cout << "Marka: " << s.marka << endl;
    cout << "Model: " << s.model << endl;
    cout << "Rok produkcji: " << s.rok_produkcji << endl;
}

int main() {
    Samochod mojSamochod = { "Toyota", "Corolla", 2018 };
    WyswietlDane(mojSamochod);
    return 0;
}



