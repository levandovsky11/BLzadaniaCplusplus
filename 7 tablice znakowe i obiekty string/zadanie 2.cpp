#include <iostream>
using namespace std;

int main() {
    char ciag[21];
    cout << "Podaj ciag znakow (max 20 znakow): " << endl;
    cin.getline(ciag, 21);
    for (int i = 0; ciag[i] != '\0'; i++) {
        if (ciag[i] == 'a') {
            ciag[i] = 'o';
        }
    }
    cout << "Zmodyfikowany ciag znakow: " << ciag << endl;
    return 0;
}



