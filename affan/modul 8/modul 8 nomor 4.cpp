#include <iostream>
using namespace std;

int main() 
{
    int x, y;
    cout << "Masukkan jumlah baris dalam matriks: ";
    cin >> x;
    cout << "Masukkan jumlah kolom dalam matriks : ";
    cin >> y;
    cout << endl;

    int matriks[x][y];

    // Memasukkan nilai matriks berdasarkan inputan
    for(int i = 0; i < x; i++) 
	{
        cout << "Memasukkan nilai matriks baris ke-" << i + 1 << endl;
        for(int j = 0; j < y; j++) 
		{
            cout << "Masukkan nilai matriks baris ke-" << i + 1 << " kolom ke-" << j + 1 << ": ";
            cin >> matriks[i][j];
        }
        cout << endl;
    }

    cout << "Menampilkan Isi Matriks Ordo " << x << " x " << y << endl;
    for(int i = 0; i < x; i++) 
	{
        for(int j = 0; j < y; j++) 
		{
            cout << matriks[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
