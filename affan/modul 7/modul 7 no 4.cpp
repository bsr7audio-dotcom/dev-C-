#include <stdio.h>

int main() 
{
    int nilai[5];
    for(int j = 0; j < 5; j++) 
	{
        printf("Masukkan Nilai ke-%d = ", j + 1);
        scanf("%d", &nilai[j]);
    }
    printf("Nilai Informatika\n");
    for(int i = 0; i < 5; i++) 
	{
        printf("Nilai Ke-%d adalah %d\n", i + 1, nilai[i]);
    }

    return 0;
}
    
