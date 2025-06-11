#include <iostream>
#include <cstring>
using namespace std;

void coment(char ket[30], int n);  

int main() {
    char lagi, c[30];
    int i;

    do {
        cout << "Masukkan nilai = ";
        cin >> i;

        coment(c, i); 
        cout << c;

        cout << "\n\nIngin input lagi [Y/T]: ";
        cin >> lagi;
    } while (lagi == 'Y' || lagi == 'y');

    return 0;
}

void coment(char ket[30], int n) {
    if (n % 2 == 1)
        strcpy(ket, "---Bilangan Ganjil---");
    else
        strcpy(ket, "---Bilangan Genap---");
}
