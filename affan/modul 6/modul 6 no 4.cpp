#include <iostream>
using namespace std;

void penjumlahan(float a, float b) 
{
    cout << "Hasil Penjumlahan = " << a + b << endl;
}

void pengurangan(float a, float b) 
{
    cout << "Hasil Pengurangan = " << a - b << endl;
}

void perkalian(float a, float b) 
{
    cout << "Hasil Perkalian = " << a * b << endl;
}

void pembagian(float a, float b) 
{
    if (b != 0) {
        cout << "Hasil Pembagian = " << a / b << endl;
    } else {
        cout << "Error: Pembagian dengan nol tidak diperbolehkan!" << endl;
    }
}

int main() 
{
    int pilihan;
    float bil1, bil2;

    cout << "Program Kalkulator Sederhana dengan Bahasa Pemrograman C++" << endl;
    cout << "Pilihan Menu Kalkulator" << endl;
    cout << "1. Penjumlahan" << endl;
    cout << "2. Pengurangan" << endl;
    cout << "3. Perkalian" << endl;
    cout << "4. Pembagian" << endl;
    
    cout << "Silahkan pilih menu (1/2/3/4): ";
    cin >> pilihan;
    
    cout << "Silahkan masukkan bilangan pertama : ";
    cin >> bil1;
    cout << "Silahkan masukkan bilangan kedua   : ";
    cin >> bil2;

    switch (pilihan) 
    {
        case 1:
            penjumlahan(bil1, bil2);
            break;
        case 2:
            pengurangan(bil1, bil2);
            break;
        case 3:
            perkalian(bil1, bil2);
            break;
        case 4:
            pembagian(bil1, bil2);
            break;
        default:
            cout << "Pilihan menu tidak valid!" << endl;
            break;
    }

    return 0;
}
