#include <iostream>
using namespace std;

int main() 
{
    // Membuat matriks dengan 3 baris 5 kolom (Ordo 3x5)
    int matriks[3][5];

    // Memasukkan nilai matriks berdasarkan inputan
    for(int i = 0; i < 3; i++) 
	{
        cout << "Memasukkan nilai matriks baris ke-" << i + 1 << endl;
        for(int j = 0; j < 5; j++) 
		{
            cout << "Masukkan nilai matriks baris ke-" << i + 1 << " kolom ke-" << j + 1 << ": ";
            cin >> matriks[i][j];
        }
        cout << endl;
    }

    cout << "Menampilkan Isi Matriks Ordo 3x5\n";
    for(int i = 0; i < 3; i++) 
	{
        for(int j = 0; j < 5; j++) 
		{
            cout << matriks[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
