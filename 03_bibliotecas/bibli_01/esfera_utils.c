#include "esfera_utils.h"


float calcula_volume (float R){
    float V=0;

    V = ((4 * PI) * ((R * R) * R))/3;

    return V;

}

float calcula_area (float R){
    float A=0;
    float D = R * 2;

    A = PI * (D * D);

    return A;
}
