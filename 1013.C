#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a, b, c, maiorab, maiorfinal;
   scanf("%d %d %d", &a, &b, &c);
   
   maiorab = (a + b + abs(a-b)) / 2;
   maiorfinal = (maiorab + c + abs(maiorab - c))/2;
   printf("%d eh o maior\n", maiorfinal);
   return 0;
}
