#include <stdio.h>

int main() {
    int nilai[5] = {80, 85, 87, 82, 89};

    printf("Nilai Informatika\n");
    for(int i = 0; i < 5; i++) 
	{
        printf("Nilai PH%d adalah %d\n", i + 1, nilai[i]);
    }

    return 0;
}
