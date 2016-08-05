#include <stdio.h>
#include <math.h>


int main()
{
    float  value,  ans, degree;
    scanf("%f", &value);
    ans= atan(value);
    degree=(360.0*ans)/(2*M_PI);

    printf("%f %f", ans,degree);
}
