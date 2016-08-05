#include <stdio.h>
#include <math.h>

int main()
{
    float X , value ;
    scanf("%f",&X);

    value = fmod(X,3);

    printf("%f",value);
}
