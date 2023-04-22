//latihan5.cpp

#include<iostream>
int main()

{
using namespace std;

const int Lusin_Telur = 12;
int jlh_telur;

cout << "Masukkan jumlah telur: ";
cin >> jlh_telur;

int lusin = jlh_telur / Lusin_Telur; // jumlah lusin telur
int telur = jlh_telur % Lusin_Telur; // sisa telur
cout << jlh_telur << " telur adalah " << lusin
<< " luisn telur, " << telur << "telur.\n";

return 0;







}
