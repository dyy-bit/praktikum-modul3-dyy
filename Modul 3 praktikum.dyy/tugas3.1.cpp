//tugas3.1.cpp
#include<iostream>

using namespace std;

int main() {

float jarak, liter, kpl;

cout << " Berapa jumlah jarak (dalam kilometer) yang telah anda tempuh dalam seumur hidup menggunakan mobil atau motor? ";
cin >> jarak;

cout << " Berapa jumlah liter bahan bakar yang telah anda gunakan untuk menempuh jarak tersebut? ";
cin >> liter;

kpl = jarak / liter;

cout << " Anda telah menempuh rata-rata " << kpl << " kilometer per liter. " << endl;

return 0;


}
