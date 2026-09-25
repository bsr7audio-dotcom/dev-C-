#include <stdio.h>

int main()
{
    int bil;
    printf("Masukkan Bilangan : ");
    scanf("%d", &bil);
    
    printf("\nTabel Perkalian 1 s.d. %d\n", bil);
    for(int i=1 ; i<=bil ; i++)
    {
        for(int j=1 ; j<=bil ; j++)
        {
            printf("%d x %d = %d\n", i, j, i*j);
        }
        printf("\n");
    }
    return 0;
    
}
