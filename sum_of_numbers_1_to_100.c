#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int sum = 0;
    int i;

    for(i = 0; i <= 100; i++){
        sum += i;
        printf("Result: ½d", sum);
    }

}