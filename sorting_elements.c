#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    int array[] = {3, 8, 45, 75, 2, 9, 6, 12, 36, 27};

    int i, j;

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < i; j++)
        {
            if (array[i] < array[j])
            {
                int temporary = array[i];
                array[i] = array[j];
                array[j] = array[i];
            } 
        }
    }

    for (i = 0; i < 10; i++)
    {
        printf("%d", array[i]);
    }


    return 0;
}