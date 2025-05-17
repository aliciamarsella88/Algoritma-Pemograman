#include <iostream>
#include <iomanip> // untuk setprecision dan setw
using namespace std;

int main() {
    // Biodata
    cout << "Nama   : Alicia Marsella" << endl;
    cout << "NIM    : 241011450267" << endl;
    cout << "Kelas  : 01TPLM001" << endl;
    cout << "Matkul : Algoritma & Pemrograman I" << endl;
    cout << "Tugas  : Pertemuan 12\n" << endl;

    // Variabel utama
    double saldo = 10000000.0; // Pinjaman awal: 10 juta
    const double bungaPersen = 1.5; // Bunga 1.5%
    const double cicilanPersen = 10.0; // Cicilan pokok 10%
    int bulan = 1;

    // Header tampilan tabel
    cout << fixed << setprecision(2); // dua angka di belakang koma
    cout << "Program Simulasi Daftar Cicilan Bulanan\n";
    cout << "---------------------------------------------------------------\n";
    cout << setw(5)  << "Bln"
         << setw(15) << "Bunga"
         << setw(15) << "Cicilan"
         << setw(20) << "Sisa Hutang" << endl;
    cout << "---------------------------------------------------------------\n";

    // Perulangan hingga sisa hutang kurang dari 1 juta
    while (saldo >= 1000000.0) {
        double bunga = saldo * (bungaPersen / 100.0);         // Hitung bunga bulan ini
        saldo += bunga;                                       // Tambah bunga ke saldo
        double cicilan = saldo * (cicilanPersen / 100.0);     // Hitung cicilan dari saldo yang sudah ditambah bunga
        saldo -= cicilan;                                     // Kurangi cicilan dari saldo

        // Tampilkan hasil bulan ini
        cout << setw(5)  << bulan
             << setw(15) << bunga
             << setw(15) << cicilan
             << setw(20) << saldo << endl;

        bulan++;
    }

    cout << "---------------------------------------------------------------\n";
    cout << "Cicilan selesai. Sisa hutang di bawah Rp1.000.000.\n";
    cout << "Sisa terakhir: Rp" << saldo << endl;

    return 0;
}

