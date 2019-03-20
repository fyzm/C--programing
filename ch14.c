#include<stdio.h>
#define A_CUBE(x) ((x)*(x))
#define B_REMAINDER(n) ((n/4))


int main(void)
{
  int Ex,Why,En;
  printf("\nEnter x,y, and n:");
  scanf("%d %d %d",&Ex,&Why,&En);
  printf("\n%d cubed: %d",Ex,A_CUBE(Ex));
  printf("\nRemainder of %d/4:%d",En,B_REMAINDER(En));
  return 0;
}