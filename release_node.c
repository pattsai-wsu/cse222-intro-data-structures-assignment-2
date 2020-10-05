#include "header.h"

/*
release node function - takes a pointer to a node passed from the delete function
this will then release the malloc'd memory
*/

void release_node(struct node *ll) {
  free(ll);                       // takes the pointer from the delete function
}                                 // uses free to release the memory
