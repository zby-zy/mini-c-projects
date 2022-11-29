#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

void CountArea(int r){
    float result = 3.14*r*r;
    printf("Area: %.2f", result);
}

void CountCircumference(int r){
    float result = 2*3.14*r;
    printf("Circumference: %.2f", result);
}

int main(int argc, char *argv[]){
    setlocale(LC_ALL, "");

    int number;
    printf("Enter radius: ");
    scanf("%d", &number);
    CountArea(number);
    CountCircumference(number);

    return 0;
}