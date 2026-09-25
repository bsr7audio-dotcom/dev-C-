#include <iostream>
using namespace std;

int luasPersegi(int sisi) 
{
    int luas = sisi * sisi;
    return luas;
}

int kelilingPersegi(int sisi) 
{
    int kell = 4 * sisi;
    return kell;
}

int main() 
{
    cout << "Program Menghitung Luas dan Keliling Persegi" << endl;
    int s, l, k;
    cout << "Masukkan sisi persegi : ";
    cin >> s;
    l = luasPersegi(s);
    k = kelilingPersegi(s);
    cout << "Luas Persegi adalah = " << l << endl;
    cout << "Keliling Persegi adalah = " << k << endl;
    return 0;
}
