#include "header.h"

/*
search function - takes a pointer to the sentinel of the list, and a number to search
then it just parses through the list following node->next till either finds or doesn't
find the number in question
*/

int search(struct node *ll, int x) {
  struct node *previous;
  struct node *current;

  previous=ll;
  current=ll->next;

    while(current->next != NULL) {     // increment through the numbers in list
      if(x != current->data) {         // by starting at the 0 index and following
        previous=current;              // the node.next values as the following index
        current=current->next;         // compare the search value to the node.value
      }                                // if the values are equivalent then
      else {                           // return 1 for found

        return 1; //match
      }
    }

    if (x == current->data) {          // this handles the end case
      return 1;                        // match
    }
    else {
      return 0;                        // if nothing matches return 0
    }
  }
