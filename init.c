#include "header.h"

/*
init function creates a sentinel node, this uses malloc to dynamically assign memory allocation
I've chosen to assign a data value (however it's not necessary)
the important part is assigning NULL to the next field for the sentinel node
*/

struct node* init() {
  struct node *list;                 // pointer to a struct node
  list=malloc(sizeof(struct node));  // this is the new node, address
  list->data=999;
  list->next=NULL;

  return(list);
}
