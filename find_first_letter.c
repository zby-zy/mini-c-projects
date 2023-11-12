#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    char text[100];
    printf("Enter text: ");
    fgets(text,sizeof(text),stdin);

    int n = strlen(text);
    int i;

    printf("%c", metin[0]);

    for (i = 0; i < n; i++)
    {
        if (text[i] == ' ')
        {
            printf("%c", text[i+1]);
        }
    }

    return 0;
}
