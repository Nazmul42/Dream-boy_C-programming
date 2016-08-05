#include <stdio.h>

void recursive_function(int n){
if(n==0)return ;
recursive_function(n/2);
printf("%d", n%2);
}
int main(){
int n=79;

recursive_function(n);


return 0;
}
