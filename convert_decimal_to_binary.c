#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    int number, binary;
    printf("Enter a number: ");
    scanf("%d", &number);

    int i;

    for (i = 0; i >= 0; i--)
    {
        binary = number >> i;
        if (binary & 1)
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
    }

    return 0;
}