#include <stdio.h>

int main()
{
    int nilai[5];
    nilai[0] = 80;
    nilai[1] = 85;
    nilai[2] = 87;
    nilai[3] = 82;
    nilai[4] = 89;
    printf("Nilai Informatika\n");
    printf("Nilai PH1 = %d\n", nilai[0]);
    printf("Nilai PH2 = %d\n", nilai[1]);
    printf("Nilai PH3 = %d\n", nilai[2]);
    printf("Nilai PTS = %d\n", nilai[3]);
    printf("Nilai PAS = %d\n", nilai[4]);
    nilai[4] = 90;
    printf("Perubahan Nilai PAS = %d\n", nilai[4]);
    return 0;
}
