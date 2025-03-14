#include <iostream>
using namespace std;

int main() {
    int a, b;
    char op;
    cout << "Podaj pierwsza liczbe: ";
    cin >> a;
    cout << "Podaj druga liczbe: ";
    cin >> b;
    cout << "Podaj znak dzialania (+, -, *, /): ";
    cin >> op;

    switch (op) {
    case '+':
        cout << "Wynik: " << a + b << endl;
        break;
    case '-':
        cout << "Wynik: " << a - b << endl;
        break;
    case '*':
        cout << "Wynik: " << a * b << endl;
        break;
    case '/':
        if (b == 0) {
            cout << "Niestety nie mozna dzielic przez 0 :(" << endl;
        }
        else {
            cout << "Wynik: " << a / b << endl;
        }
        break;
    default:
        cout << "Blad: nieznany znak" << endl;
        break;
    }

    return 0;
}
