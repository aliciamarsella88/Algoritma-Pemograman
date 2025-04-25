#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    // Input tiga buah bilangan
    cout << "Masukkan panjang sisi pertama: ";
    cin >> a;
    cout << "Masukkan panjang sisi kedua: ";
    cin >> b;
    cout << "Masukkan panjang sisi ketiga: ";
    cin >> c;

    // Cek apakah bisa membentuk segitiga
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        cout << "SEGITIGA" << endl;
    } else {
        cout << "BUKAN SEGITIGA" << endl;
    }

    return 0;
}

