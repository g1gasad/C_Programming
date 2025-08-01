#include <stdio.h>
int main( )
{
 int i, j ;
 for (i = 1, j = 1 ; i < 3 || j < 5 ; i++, j++)
 {
 printf("%d\t%d\n", i, j) ;
 }
 printf("%d | %d", i, j);
 return 0 ;
} 