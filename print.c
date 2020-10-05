#include "header.h"

/*
print function - this function is passed the pointer to the sentinel node of the list
it will check if there are no values in the list and print no current entries if true
if there are entries, it will parse through the list and print out each node
*/

void print(struct node *ll) {
  struct node *current;


  if(ll->next == NULL) {              // initially checks if the 0 index node
    printf("NO CURRENT ENTRIES\n");   // point to MYNULL, if so then list is 
  }                                   // empty and prints NO CURRENT ENTRIES
  else {
    current=ll->next;

    while(1) {                        // it will print out each value
      if(current->next != NULL) {     // following the node.next value
        printf("%d ", current->data); // used to point to the index of
        current=current->next;        // the next element
      }
      else {
        printf("%d\n", current->data);// handles the last element in the list
        break;                        // then breaks the while looop and
      }                               // ends the function
    }
  }
}

