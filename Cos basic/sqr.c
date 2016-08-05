#include <stdio.h>
#include <math.h>


int main()
{
     float x,i,resX=1,resY,resZ;
     scanf("%f", &x);
     for(i=1; i<=x; i++){
        resX=resX*i;
        printf("%f\n", resX);
        resY=resX*resX;
        printf("%f\n", resY);
        resZ=resY/resX;
        printf("%f\n", resZ);
     }

}
