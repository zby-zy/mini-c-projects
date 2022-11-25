#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int n;
    int sum_odd = 0, sum_even = 0;

    printf("Enter n value: ");
    scanf("%d", n);

    int i;
    for (i = 0; i < n; i++)
    {
        int number;
        printf("Number: ");
        scanf("%d", &number);

        if (number%2 == 0)
        {
            sum_even += number;
        }
        else
        {
            sum_odd += number;
        }
    }

    printf("Sum of the even numbers: %d", sum_even);
    printf("Sum of the odd numbers: %d", sum_odd);

    return 0;
}