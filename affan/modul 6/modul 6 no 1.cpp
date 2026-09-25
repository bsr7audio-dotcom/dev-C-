#include <iostream>
using namespace std;

void luasPersegi(int sisi) 
{
    int luas = sisi * sisi;
    cout << "Luas Persegi adalah = " << luas << endl;
}

void kelilingPersegi(int sisi) 
{
    int kell = 4 * sisi;
    cout << "Keliling Persegi adalah = " << kell << endl;
}

int main() 
{
    cout << "Program Menghitung Luas dan Keliling Persegi" << endl;
    int s, l, k;
    cout << "Masukkan sisi persegi : ";
    cin >> s;
    luasPersegi(s);
    kelilingPersegi(s);
    return 0;
}
