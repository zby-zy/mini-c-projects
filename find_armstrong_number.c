#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    int number;
    printf("Enter number: ");
    scanf("%d", &number);
    int temp = number;

    int n;
    while (temp != 0)
    {
        temp = temp%10;
        n++;
    }

    int temp2 = number;

    int result = 0;

    while (temp2 != 0)
    {
        int temporary = temp2%10;

        result += pow(temporary, 3);
        temp2 = temp2/10;
    }

    if (number == result)
    {
        printf("%d is an armstrong number.", number);
    }
    else
    {
        printf("%d is not an armstrong number.", number);
    }


    return 0;
}