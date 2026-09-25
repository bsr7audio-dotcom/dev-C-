#include <stdio.h>

void isiArray(int arr[], int n) 
{
    for (int i = 0; i < n; i++) 
	{
        printf("Masukkan nilai ke-%d : ", i + 1);
        scanf("%d", &arr[i]);
    }
}

void tampilArray(int arr[], int n) 
{
    for (int i = 0; i < n; i++) 
	{
        printf("Nilai ke-%d adalah %d\n", i + 1, arr[i]);
    }
}

int main() 
{
    int n;

    printf("Masukkan jumlah elemen array : ");
    scanf("%d", &n);

    int nilai[n];

    isiArray(nilai, n);
    tampilArray(nilai, n);

    return 0;
}
