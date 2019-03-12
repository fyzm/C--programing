// #include directives go here
// #define directies go here 
// declarations of external variables go here
#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

#define NUM_RANKS 13
#define NUM_SUITS 4
#define NUM_CARDS 5


// external variables
int num_in_rank[NUM_RANKS];
int num_in_suit[NUM_SUITS];
bool straight,flush,four,three;
int pairs;
//prototypes
void read_cards(void);

void analyze_hand(void);

void print_result(void);

/* 
main : Calls read_cards analyze_hand,and print_result repeatedly

 */

int main(void) {
  for(;;){
    read_cards();
    analyze_hand();
    print_result();
  }
}
/* 
read_cards:reads the cards into external variables;
          checks for bad cards and dupicate cards.
 */
void read_cards(void) {

}
/* 
analyze_hand:Determines whether the hand contains a straight,a flush ,four of kind and or three-of-a-kind;
dtermines the number of pairs; stores the results into external variblers
 */
void analyze_hand(void) {

}
/* 
  print_result: Notifies the user of the result,using the external variables set by analyze_hand.
 */
void print_result(void) {
  
}