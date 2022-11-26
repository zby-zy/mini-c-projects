#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    int array[] = {3, 8, 15, 29, 36, 2, 7, 88, 657, 349};

    int max = array[0];
    int min = array[0];

    int i, j;

    for (i = 1; i < 10; i++)
    {
        if (max < array[i])
        {
            max = array[i];
        }
        
        if (min > array[i])
        {
            min = array[i];
        }
    }

    printf("Maximum number: %d\n", max);
    printf("Minimum number: %d", min);

    return 0;
}