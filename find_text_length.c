#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    char text [100];
    int number;
    printf("Enter text: ");
    gets(text);

    int i;
    for (i = 0; text[i] != '\0'; i++)
    {
        number++;
    }

    int length = strlen(text);

    printf("Length of text with for loop: %d\n", number);
    printf("Length of text with strlen: %d", length);


    return 0;
}