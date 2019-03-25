#include<stdio.h>
//#include "readline.h"

#define NAME_LEN 25
#define MAX_PARTS 100

struct part {
  int number;
  char name[NAME_LEN+1];
  int on_hand;
} inventory[MAX_PARTS];


void find_part(void);
void insert(void);
void search(void);
void update(void);
void print(void);

int main(void)
{
  char code;
  for(;;){
    printf("Enter operation code: ");
    scanf(" %c",&code);
    
  }

}