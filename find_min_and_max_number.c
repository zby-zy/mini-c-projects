#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int n1, n2, n3;
    int min, max;

    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &n1, &n2, &n3);


    max = (n1 > n2 && n1 > n3) ? n1: (n2 > n1 && n2 > n3) ? n2: n3;
    min = (n1 < n2 && n1 < n3) ? n1: (n2 < n1 && n2 < n3) ? n2: n3;

    printf("Maximum number: %d\n", max);
    printf("Minimum number: %d", min);

    return 0;
}