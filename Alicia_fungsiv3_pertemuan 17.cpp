#include <iostream>
using namespace std;

void tambah(int m, int n);

int main() {
    int a = 5, b = 9;

    cout << "Nilai Sebelum Fungsi Digunakan ";
    cout << "\na = " << a << " b = " << b;

    tambah(a, b);

    cout << "\nNilai Setelah Fungsi Digunakan";
    cout << "\na = " << a << " b = " << b << endl;

    return 0;
}

void tambah(int m, int n) {
    m += 5;
    n += 7;
    cout << "\n\nNilai di dalam Fungsi Tambah()";
    cout << "\nm = " << m << " n = " << n << endl;
}
