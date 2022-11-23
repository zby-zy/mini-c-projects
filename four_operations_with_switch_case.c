#include <stdio.h>
#include <stdlib.h>

int main(){

    int n1, n2;
    char select;

    printf("First number: ");
    scanf("%d", &n1);

    printf("Enter character[+, -, *, /]: ");
    scanf("%c", &select);

    printf("Second number: ");
    scanf("%d", &n2);

    switch (select)
    {
        case '+': printf("Addition result: %d", (n1+n2));
        break;
        case '-': printf("Substraction result: %d", (n1-n2));
        break;
        case '*': printf("Multiplication result: %d", (n1*n2));
        break;
        case '/': printf("Division result: %d", (n1/n2));
        break;

        default: printf("Error!");
        break;
    }

    return 0;
}