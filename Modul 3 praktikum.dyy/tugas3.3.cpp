//tugas.3.3.cpp
#include <iostream>
using namespace std;

int main() {
    // Deklarasi variabel
    double rupiah, dollar, euro, pound, yen, riyal;

    // Meminta masukan jumlah uang dalam Rupiah
    cout << "Masukkan jumlah uang dalam Rupiah: ";
    cin >> rupiah;

    // Menghitung konversi ke dollar Amerika, Euro, Poundsterling, Yen, dan Riyal Saudi
    dollar = rupiah / 15000;
    euro = rupiah / 16000;
    pound = rupiah / 18000;
    yen = rupiah / 11000;
    riyal = rupiah / 4000;

    // Menampilkan hasil konversi
    cout << "Jumlah uang dalam:\n";
    cout << "$" << dollar << " dollar Amerika\n";
    cout << "\u20AC" << euro << " Euro\n"; // menggunakan karakter unicode untuk simbol euro
    cout << "\xA3" << pound << " Poundsterling\n"; // menggunakan karakter unicode untuk simbol poundsterling
    cout << "\xA5" << yen << " Yen\n"; // menggunakan karakter unicode untuk simbol yen
    cout << "SR" << riyal << " Riyal Saudi\n"; // SR adalah simbol kode ISO untuk Riyal Saudi

    return 0;
}
