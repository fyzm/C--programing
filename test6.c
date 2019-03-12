#include <stdio.h>
void swap(int *a,int *b);


int main(void){
    int i = 1,j = 2;
    printf("i =%d,j=%d\n",i,j);
    swap(&i,&j);
    printf("after exchange:\n");
    printf("i =%d,j=%d\n",i,j);
    return 0;
}
void swap(int *a ,int *b) {
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}
