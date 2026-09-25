#include <iostream>
using namespace std;

int main() 
{
    // Membuat matriks dengan 3 baris 5 kolom (Ordo 3x5)
    int matriks[3][5] = { 
        {11, 12, 13, 14, 15}, 
        {16, 17, 18, 19, 20}, 
        {21, 22, 23, 24, 25} 
    };

    cout << "Menampilkan Isi Matriks Ordo 3x5\n";
    
    for(int i = 0; i < 3; i++) 
	{
        for(int j = 0; j < 5; j++) {
            cout << matriks[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
} 
