#include <iostream>
using namespace std;

int main() {

    int a = 10;
    float b = 3.14;
    char c = 'A';
    bool d = true;

    cout << "zmienna calkowita: " << a <<endl;
    cout << "zmienna zmiennoprzecinkowa: " << b <<endl;
    cout << "zmienna znakowa: " << c <<endl;
    cout << "zmienna logiczna: " << boolalpha << d <<endl;

    return 0;
}