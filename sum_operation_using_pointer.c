#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]){

    int n1, n2, result;

    printf("Enter number: ");
    scanf("%d", &n1);

    printf("Enter number: ");
    scanf("%d", &n2);

    p1 = &n1;
    p2 = &n2;

    result = *p1 + *p2;

    printf("Sum = %d", result);

    return 0;
}