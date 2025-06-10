#include <iostream>
using namespace std;

void znajdzMinMax(float* tab, int rozmiar, float* min, float* max) {
    *min = tab[0];
    *max = tab[0];
    for (int i = 1; i < rozmiar; i++) {
        if (tab[i] < *min) *min = tab[i];
        if (tab[i] > *max) *max = tab[i];
    }
}

int main() {
    const int N = 10;
    float tab[N] = { 1.5f, -3.2f, 4.8f, 7.0f, -1.1f, 0.0f, 3.3f, -6.6f, 8.9f, 2.2f };
    float minVal, maxVal;

    znajdzMinMax(tab, N, &minVal, &maxVal);

    cout << "Tablica: ";
    for (int i = 0; i < N; i++) {
        cout << tab[i] << " ";
    }
    cout << endl;
    cout << "Najwieksza liczba: " << maxVal << endl;
    cout << "Najmniejsza liczba: " << minVal << endl;

    return 0;
}



