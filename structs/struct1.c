/* 

//结构化的标记与声明
struct part part1,part2;
struct part {
  int number;
  char name[NAME_LEN+1];
  int on_hand;
}part1,part2;

//结构化的类型与定义

typedef struct {
  int number;
  char name[NAME_LEN+1];
  int on_hand;
} Part;
Part part1,part2;

void print_part(struct part p)
{
  printf("Part number: %d\n",p.number)
  printf("Part name: %s\n",p.name)
}

//作为返回值
struct part build_part(int number,const char *name int on_hand)
{
  struct part p;
  p.number = number;


}
//
part1 = (struct part){528,"Disk drive",10};


print_part((struct part) {.on_hand = 10,
                          .name = "Disk drive"
                          .number = 528    
                            })

struct person_name {
  char first[FIRST_NAME_LEN + 1];
  char middle_initial;
  char last[LAST_NAME_LEN + 1];
};

struct stdudent {
  struct person_name name;
  int id,age;
  char sex;
} student1,stduent2;

*/

#define NAME_LEN 10
struct {
  int number;
  char name[NAME_LEN + 1]  ;
  int on_hand;

} part1 = {456,"Dis",10},
  part2 = {457,"Di",20};


struct {
  char name[NAME_LEN +1];
  int number;
  char sex;
} employee1,employee2;


/* 
book: name,author,pages

cup: design

shift: design color,size
 */
struct catalg_item{
  int stock_number;
  double price;
  int item_type;
  union {
    struct {
      char title;
      char author;
      int num_pages;
    }book;
    struct {
      char design;
    }mug;
    struct {
      char design;
      int size;
      int color;
    }shirt;
  }item;
}

// typedef union {
//   int i;
//   double d;
// } Number;
// Number number_array[1000];



