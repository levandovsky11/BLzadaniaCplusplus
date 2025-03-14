#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Podaj liczbe N: ";
    cin >> N;
    cout << "\nLiczby parzyste od 2 do " << N << ":\n";
    int liczba = 2;
    while (liczba <= N) {
        cout << liczba << endl;
        liczba += 2;
    }
    return 0;
}
