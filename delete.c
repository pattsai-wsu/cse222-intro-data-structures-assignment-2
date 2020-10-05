#include "header.h"

/*
delete function - takes in the sentinel pointer and a number
parses through the list starting at the sentinel, once it finds the
number, it changes the pointer of the previous->next to the current->next,
this essentially deletes the found number- as it won't be pointed to anymore
then the node's malloc'd memory is released
*/

int delete(struct node *ll, int x) {
   struct node *current;
   struct node *previous;

   previous=ll; 
   current=ll->next;                           
                                                         
   while(current->next != NULL) {         // parsing through each node
     if(x != current->data) {             // till the x equals the current node
       previous=current; 
       current=current->next; 
      } 
      else {
        break;
      }
    }

    if (x == current->data) {             // this handles the case when a number is at the end
      current=current;                    // of the list
    }
    else {
      printf("something horribly wrong with search and get index functions");
    }

   previous->next=current->next;          // changes the previous next poointer to the
   release_node(current);                 // current next pointer, essentially skipping-deleteing
}                                         // then it releases the malloc'd memory
