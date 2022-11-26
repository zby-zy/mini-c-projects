#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    int midterm, final;
    float avg;

    printf("Midterm grade: ");
    scanf("%d", &midterm);

    printf("Final grade: ");
    scanf("%d", &final);

    avg = 0.4*(float)vize + 0.6*(float)final;

    if (avg < 50)
    {
        printf("You failed: \nYour grade: %.2f", avg);
    }
    else
    {
        printf("You passed: \nYour grade: %.2f", avg);
    }

    return 0;
}