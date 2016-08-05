#include <stdio.h>
#include <math.h>


int main()
{
    float theta, value;
    scanf("%f", &theta);
    theta = (2*M_PI*theta)/360.0;

    value = sin(theta);
    printf("sin(%f) = %f", theta, value);
}
