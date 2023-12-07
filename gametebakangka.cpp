#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Inisialisasi random seed
    srand(static_cast<unsigned int>(time(0)));

    // Mengacak angka antara 1 dan 100
    int secretNumber = rand() % 100 + 1;
    int guess;
    int attempts = 0;  

    cout << "=== Permainan Tebak Angka ===" << endl << endl;

    do {
        cout << "Berikan Tebakan Anda!! (1-100): ";
        cin >> guess;
        attempts++;

        if (guess > secretNumber) {
            cout << "Terlalu tinggi. Coba lagi." << endl;
        } else if (guess < secretNumber) {
            cout << "Terlalu rendah! Coba lagi." << endl;
        } else {
            cout << "Selamat! Anda menebak angka sebanyak " << attempts << " kali percobaan." << endl;
        }
    } while (guess != secretNumber);

    return 0;
}