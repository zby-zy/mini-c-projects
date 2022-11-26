#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    int number;
    printf("Enter number: ");
    scanf("%d", &number);
    int temp = number;

    int reverse = 0;

    while (temp != 0)
    {
        reverse = reverse*10;
        reverse += temp%10;
        temp = temp/10;
    }

    if (number == reverse)
    {
        printf("%d is a palindromic number.", number);
    }
    else
    {
        printf("%d is not a palindromic number.", number);
    }

    return 0;
}