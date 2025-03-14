#include <iostream>
using namespace std;

int main() {
    int punkty;
    cout << "Podaj wynik egzaminu (liczba punktow): ";
    cin >> punkty;
    
    if (punkty < 50) {
        cout << "Ocena: Niedostateczna" << endl;
    }
    else if (punkty < 70) {
        cout << "Ocena: Dostateczna" << endl;
    }
    else if (punkty < 85) {
        cout << "Ocena: Dobra" << endl;
    }
    else if (punkty < 100) {
        cout << "Ocena: Bardzo dobra" << endl;
    }
    else {
        cout << "Ocena: Celujaca" << endl;
    }
    
    return 0;
}
