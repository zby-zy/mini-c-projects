#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    char text[100];

    printf("Enter text: ");
    gets(text);

    int i;
    int n = strlen(text);

    for (i = 0; i < n; i++)
    {
        printf("%c", text[n-i-1]);
        
    }

    return 0;
}