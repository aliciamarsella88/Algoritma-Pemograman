#include <iostream>
using namespace std;

void tambah(int *c, int *d);

int main() {
    int a = 4, b = 6;

    cout << "Nilai Sebelum Pemanggilan Fungsi";
    cout << "\na = " << a << " b = " << b;

    tambah(&a, &b);
    cout << endl;

    cout << "\nNilai Setelah Pemanggilan Fungsi";
    cout << "\na = " << a << " b = " << b << endl;

    return 0;
}

void tambah(int *c, int *d) {
    *c += 7;
    *d += 5;
    cout << "\nNilai di Akhir Fungsi Tambah()";
    cout << "\nc = " << *c << " d = " << *d << endl;
}
