#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <time.h>

int main(int argc, char *argv[]){

    int n1, n2;
    
    printf("Enter the starting number: ");
    scanf("%d", %n1);

    printf("Enter the ending number: ");
    scanf("%d", %n2);

    int i, j;
    for (i = n1; i < n2; i++)
    {
        int status = 1;
        for (j = 2; j < i; j++)
        {
            if (i%j == 0)
            {
                break;
            }
        }

        if(status = 1)
        printf("%d", i);
        
    }

    return 0;
}