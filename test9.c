#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAX_NUMBER 100
int secret_number;

void initialize_number_generator(void);
void choose_new_secret_number(void);
void read_guesses(void);


int main(void) {
  char command;
  printf("Guess the secret number between 1 and %d \n\n",MAX_NUMBER);
  initialize_number_generator();
  do {

  }while (command == 'y' || command == 'Y');

  return 0;
}

void initialize_number_generator(void){

}

void choose_new_secret_number(void){

}
void read_guesses(void){

}