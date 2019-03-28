#include<stdio.h>
//#include "readline.h"

#define NAME_LEN 25
#define MAX_PARTS 100

struct part {
  int number;
  char name[NAME_LEN+1];
  int on_hand;
} inventory[MAX_PARTS];


int find_part(int number);
void insert(void);
void search(void);
void update(void);
void print(void);

int num_parts = 0;

int main(void)
{
  char code;
  for(;;){
    printf("Enter operation code: ");
    scanf(" %c",&code);
    while(getchar() !='\n')
     ;
    switch (code) {
      case 'i': insert();
                break;
      case 's': search();
                break;
      case 'u': update();
                break;
      case 'p': print();
                break;
      case 'q': return 0;
      default: printf("Illegal code\n");
    }
    printf("\n");
  }

}

int find_part(int number)
{
  int i;
  for(i = 0;i < num_parts;i++)
    if(inventory[i].number == number)
      return i;
  return -1;
}

void insert(void)
{
  int part_number;
  if(num_parts == MAX_PARTS) {
    printf("Datebase is full;can not add more parts.\n");
    return;
  }
  printf("Enter part number: ");
  scanf("%d",&part_number);
  if(find_part(part_number) >=0){

  }

}

void search(void)
{

  
}

void update(void)
{

}
void print(void)
{

}  


