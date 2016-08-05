#include <stdio.h>

int main()
{
  int i,res=1;


  for(i=2; i<=37; i=i+5){
     res=res *i;
  }
  printf("%d", res);

}
