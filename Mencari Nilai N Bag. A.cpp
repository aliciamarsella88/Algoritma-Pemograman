#include <iostream>
using namespace std;

int main() {
    int A, N;
    cout << "Masukkan nilai A: ";
    cin >> A;

    cout << "Masukkan nilai N: ";
    cin >> N;

    if (A > 50) {
        N = N + 10;
    } else {
        N = N + 25;
    }

    cout << "Nilai akhir N: " << N << endl;
    return 0;
}

