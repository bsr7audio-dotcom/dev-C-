#include <stdio.h>

int main()
{
    int bil;
    printf("Masukkan Bilangan : ");
    scanf("%d", &bil);
    for(int i=1 ; i<=bil ; i++)
    {
        for(int j=1 ; j<=bil ; j++)
        {
            printf("%d\t", i*j);
        }
        printf("\n");
    }
    return 0;
}
