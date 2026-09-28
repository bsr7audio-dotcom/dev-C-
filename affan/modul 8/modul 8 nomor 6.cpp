#include <iostream>
using namespace std;

// Fungsi bertipe int untuk mengisi elemen matriks
int isi_matriks(int x, int y, int matriks[100][100]) 
{
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
    return 0;
}

// Fungsi bertipe int untuk menampilkan elemen matriks
int tampil_matriks(int x, int y, int matriks[100][100]) 
{
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

// Fungsi bertipe int untuk melakukan transpose matriks
int transpose_matriks(int x, int y, int matriks[100][100], int hasil_transpose[100][100]) 
{
    for(int i = 0; i < x; i++) 
	{
        for(int j = 0; j < y; j++) 
		{
            hasil_transpose[j][i] = matriks[i][j];
        }
    }
    return 0;
}

int main() 
{
    int x, y;
    cout << "Masukkan jumlah baris dalam matriks: ";
    cin >> x;
    cout << "Masukkan jumlah kolom dalam matriks : ";
    cin >> y;
    cout << endl;

    int matriks[100][100];
    int hasil_transpose[100][100];

    // Memanggil fungsi-fungsi bertipe int
    isi_matriks(x, y, matriks);

    cout << "Menampilkan Isi Matriks Asal Ordo " << x << " x " << y << endl;
    tampil_matriks(x, y, matriks);
    cout << endl;

    transpose_matriks(x, y, matriks, hasil_transpose);

    cout << "Menampilkan Isi Matriks Setelah Transpose Ordo " << y << " x " << x << endl;
    tampil_matriks(y, x, hasil_transpose);

    return 0;
}
