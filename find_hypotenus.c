#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    int k1, k2, hypo;

    printf("Enter two perpendicular sides: ");
    scanf("%d %d", &k1 &k2);

    hypo = sqrt(k1*k1 + k2*k2);

    printf("Hypotenus: %.2f", hypo);

    return 0;
}