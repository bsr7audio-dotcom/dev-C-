#include <iostream>
using namespace std;

int main() 
{
    // Membuat matriks dengan 3 baris 5 kolom (Ordo 3x5)
    int matriks[3][5] = 
	{ 
        {11, 12, 13, 14, 15}, 
        {16, 17, 18, 19, 20}, 
        {21, 22, 23, 24, 25} 
    };

    cout << "Menampilkan Isi Matriks Ordo 3x5\n";
    
    // Menampilkan isi matriks baris pertama
    cout << matriks[0][0] << " ";
    cout << matriks[0][1] << " ";
    cout << matriks[0][2] << " ";
    cout << matriks[0][3] << " ";
    cout << matriks[0][4] << endl;
    
    // Menampilkan isi matriks baris kedua
    cout << matriks[1][0] << " ";
    cout << matriks[1][1] << " ";
    cout << matriks[1][2] << " ";
    cout << matriks[1][3] << " ";
    cout << matriks[1][4] << endl;
    
    // Menampilkan isi matriks baris ketiga
    cout << matriks[2][0] << " ";
    cout << matriks[2][1] << " ";
    cout << matriks[2][2] << " ";
    cout << matriks[2][3] << " ";
    cout << matriks[2][4] << endl;

    return 0;
}
