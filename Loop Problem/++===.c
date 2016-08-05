#include <stdio.h>

int main()
{
  int i,res=0;


  for(i=3; i<=1691; i=i+8){
     res=res +i;
  }
  printf("%d", res);

}
