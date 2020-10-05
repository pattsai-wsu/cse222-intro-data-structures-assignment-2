#include "header.h"

/*
release all function - this function is run just before the program exits
it handles releasing all the malloc'd memory used in the list.
it will parse through the list and releases each previous node,
then at the end releases the current node, and that should be it
*/

void release_all(struct node *ll) {
  struct node *previous;
  struct node *current;

  previous=ll;
  current=ll->next;

  while (current->next!=NULL) {
    free(previous);                // releases previous node malloc mem
    previous=current;              // parse node increment
    current=current->next;         // parse node increment
  }
  free(previous);                  // handles the end nodes
  free(current);                   // must release both nodes due to breaking
}                                  // the while loop at last node and not releaseing previous
