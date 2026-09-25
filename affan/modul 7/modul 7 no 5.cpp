#include <stdio.h>

int main() 
{
    int n;

    printf("Masukkan jumlah elemen array: ");
    scanf("%d", &n);

    int nilai[n];

    for(int i = 0; i < n; i++) 
	{
        printf("Masukkan nilai ke-%d: ", i + 1);
        scanf("%d", &nilai[i]);
    }

    for(int i = 0; i < n; i++) 
	{
        printf("Nilai ke-%d adalah %d\n", i + 1, nilai[i]);
    }

    return 0;
}
