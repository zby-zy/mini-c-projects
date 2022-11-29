#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

void Area(int r){
    float area = 4*3.14*(float)r*r;
    printf("Area: %.2f\n", area);
}

void Volume(int r){
    float volume = (4/3)*3.14*(float)r*r*r;
    printf("Volume: %.2f\n", volume);
}

int main(int argc, char *argv[]){
    setlocale(LC_ALL, "");

    int r;
    printf("Enter radius: ");
    scanf("%d", &r);

    Area(r);
    Circumference(r);

    return 0;
}