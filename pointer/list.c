
#define NULL 0;
struct node {
  int value;
  struct node *next;
};

struct node *new_node;
//new_node = malloc(sizeof(struct node));
//(*new_node).value = 10;

//new_node->value = 10;


// struct node *add_to_list(struct node *list,int n)//list(指向旧链表首节点的指针)
// {
//   struct node *new_node;
//   new_node = malloc(sizeof(struct node));
//   if(new_node == 0) {
//       printf("Error:malloc failed in add_to list\n");
//       exit(EXIT_FAILURE);
//   }
//   new_node->value = n;
//   new_node->next = list;
//   return new_node;
// }


// struct node *read_numbers(void)
// {
//   struct node *first = NULL;
//   int n;
//   printf("Enter a series of intergers (0 to terminate):");
//   for(;;){
//     scanf("%d",&n);
//     if(n == 0)
//       return first;
//     first = add_to_list(first,n);
//   }
//}


//for(p = first;p!=NULL;p = p->next)

 struct node *search_list(struct node *list,int n)
 {
   struct node *p;
   for(p = list; p != NULL; p = p ->next)
      if(p->value == n)
        return p;
   return NULL;
 }
 struct node *search_list(struct node *list,int n)
 {
   while(list !=NULL && list->value !=n)
      list = list-next;
   return list;
 }

 //从链表中删除节点

//定位删除的节点
for(cur = list ,pre = NULL;
    cur != NULL && cur->value !=n;
    prev = cur,cur = cur->next;
    )
//找到了
prev->next = cur->next;

struct node *delete_from_list(struct node *list,int n)
{
  struct node *cur ,*prev;
  for(cur = list,prev = NULL;
      cur !=NULL && cur->value !=n;
      prev = cur,cur = cur->next)
  if(cur == NULL)
      return list;
  if(pre == NULL)
    list = list->next;
  else
    pre->next = cur->next;
  free(cur);
  return list;
}














