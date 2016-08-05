#include <stdio.h>
#include <math.h>


int main()
{
    float theta = (30*(2*3.1416))/360, value;

    value = cos(theta);
    printf("cos(%f) = %f", theta,value);
}
