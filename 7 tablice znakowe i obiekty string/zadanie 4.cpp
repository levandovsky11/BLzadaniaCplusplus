#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char ciag[101];
    cout << "Podaj ciag znakow: " << endl;
    cin.getline(ciag, 101);
    int dlugosc = strlen(ciag);
    char odwrocony[101];
    for (int i = 0; i < dlugosc; i++) {
        odwrocony[i] = ciag[dlugosc - 1 - i];
    }
    odwrocony[dlugosc] = '\0';
    cout << "Odwrocony ciag: " << odwrocony << endl;
    return 0;
}



