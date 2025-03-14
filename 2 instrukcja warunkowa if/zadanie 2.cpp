#include <iostream>
using namespace std;

int main() {
    double waga, wzrost;
    cout << "Podaj wage (w kg): ";
    cin >> waga;
    cout << "Podaj wzrost (w metrach): ";
    cin >> wzrost;
    double bmi = waga / (wzrost * wzrost);
    cout << "\nTwoje BMI wynosi: " << bmi << endl;

    if (bmi < 18.5) {
        cout << "Twoj stan wagowy: niedowaga" << endl;
    }
    else if (bmi < 25) {
        cout << "Twoj stan wagowy: w normie" << endl;
    }
    else if (bmi < 30) {
        cout << "Twoj stan wagowy: nadwaga" << endl;
    }
    else {
        cout << "Twoj stan wagowy: otylosc" << endl;
    }

    return 0;
}
