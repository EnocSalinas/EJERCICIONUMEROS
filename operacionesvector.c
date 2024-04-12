#include <stdio.h>

int main(int argc, char const *argv[])
{
    
    int numbers [5];

    numbers[0] = 3;
    numbers[1] = 4;
    numbers[2] = 5;
    numbers[3] = 6;
    numbers[4] = 1;

    printf ("El elemento # 1 %d \n", numbers[0]);
    printf ("El elemento # 2 %d \n", numbers[1]);
    printf ("El elemento # 3 %d \n", numbers[2]);
    printf ("El elemento # 4 %d \n", numbers[3]);
    printf ("El elemento # 5 %d \n", numbers[4]);

    printf ("La suma de los elementos es: %d \n", numbers[0] + numbers[1] + numbers[2] + numbers[3] + numbers[4]);


    return 0;
}