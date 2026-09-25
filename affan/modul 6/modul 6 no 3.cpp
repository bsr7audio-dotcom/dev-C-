#include <iostream>
using namespace std;

float PI = 3.14;
int luasLingkaran(int r) 
{
    int luas = PI * r * r;
    return luas;
}

int kelilingLingkaran(int r) 
{
    int kell = 2 * PI * r;
    return kell;
}

int main() 
{
    cout << "Program Menghitung Luas dan Keliling Lingkaran" << endl;
    int r, l, k;
    cout << "Masukkan jari-jari lingkaran : ";
    cin >> r;
    l = luasLingkaran(r);
    k = kelilingLingkaran(r);
    cout << "Luas lingkaran adalah = " << l << endl;
    cout << "Keliling lingkaran adalah = " << k << endl;
    
    return 0;
}
