#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    
    float numbers [10];

    numbers[0] = 3.5;
    numbers[1] = 4.5;
    numbers[2] = 5.5;
    numbers[3] = 6.5;
    numbers[4] = 1.5;
    numbers[5] = 2.5;
    numbers[6] = 7.5;
    numbers[7] = 8.5;
    numbers[8] = 9.5;
    numbers[9] = 10.5;

    printf ("El elemento # 1 %f \n", numbers[0]);
    printf ("El elemento # 2 %f \n", numbers[1]);
    printf ("El elemento # 3 %f \n", numbers[2]);
    printf ("El elemento # 4 %f \n", numbers[3]);
    printf ("El elemento # 5 %f \n", numbers[4]);
    printf ("El elemento # 6 %f \n", numbers[5]);
    printf ("El elemento # 7 %f \n", numbers[6]);
    printf ("El elemento # 8 %f \n", numbers[7]);
    printf ("El elemento # 9 %f \n", numbers[8]);
    printf ("El elemento # 10 %f \n", numbers[9]);

    printf ("La suma de los elementos es: %f \n", numbers[0] + numbers[1] + numbers[2] + numbers[3] + numbers[4] + numbers[5] + numbers[6] + numbers[7] + numbers[8] + numbers[9]);
    return 0;
}
