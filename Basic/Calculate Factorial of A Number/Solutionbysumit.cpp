#include <stdio.h>
#include<conio.h>
void factorial(int n);
int main ()
{
  int n;
  printf ("N= ");
  scanf ("%d",&n);
    factorial(n);
  return 0;
}
void factorial(int n)
{
long b=1;
 for(int i = 1; i <=n; i++)
    { 
        b=b*i;
    }
    printf("OUTPUT= &ld",b);
}
