//tugas3.2.cpp
#include <iostream>
using namespace std;

const int SECONDS_PER_MINUTE = 60;
const int MINUTES_PER_HOUR = 60;
const int HOURS_PER_DAY = 24;

int main() {

    int seconds;
    long days, hours, minutes;


    cout << "Masukkan jumlah detik: ";
    cin >> seconds;

    // Menghitung jumlah hari, jam, menit, dan detik
    days = seconds / (SECONDS_PER_MINUTE * MINUTES_PER_HOUR * HOURS_PER_DAY);
    seconds %= SECONDS_PER_MINUTE * MINUTES_PER_HOUR * HOURS_PER_DAY;

    hours = seconds / (SECONDS_PER_MINUTE * MINUTES_PER_HOUR);
    seconds %= SECONDS_PER_MINUTE * MINUTES_PER_HOUR;

    minutes = seconds / SECONDS_PER_MINUTE;
    seconds %= SECONDS_PER_MINUTE;

    // Menampilkan hasil konversi
    cout << days << " hari, " << hours << " jam, "
         << minutes << " menit, " << seconds << " detik" << endl;

    return 0;
}
