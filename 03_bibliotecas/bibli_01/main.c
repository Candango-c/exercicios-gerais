#include<stdio.h>
#include "esfera_utils.h"

int main(){
    float R=0;
    float A=0;
    float V=0;

    scanf("%f", &R);

    A = calcula_area(R);

    printf("Area: %.2f\n", A);

    V = calcula_volume(R);

    printf("Volume: %.2f\n", V);

    return 0;
}