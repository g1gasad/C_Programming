#include <stdio.h>

int change(int b);

int change(int b){
   b = 77;
   return 0;
}


int main(){
   int b=22;
   change(b);
   printf("b is now %d", b);

   return 0;
}