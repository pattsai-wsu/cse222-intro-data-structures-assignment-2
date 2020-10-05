#include "header.h"

/*
add function - takes in a pointer to the linked list sentinel and a number
add function runs after the the search function so we know the number does
not already exist the list, and needs to be added.
*/

int add(struct node *ll, int x) {
  struct node *previous;
  struct node *current;

   previous=ll;       
   current=ll->next;

   struct node *newNode=malloc(sizeof(struct node));
   newNode->data=x;

   if (current==NULL) {              // handles case when adding to empty list
     newNode->next=NULL;
     previous->next=newNode;
   }
   else {
     while (x > current->data && current->next!=NULL) { 
        previous=current;             
        current=current->next; 
     }

     if (x < current->data && current->next==NULL){
       newNode->next=current;         // handles if added number is added to the
       previous->next=newNode;        // second to last position
     }
     else if (x>current->data && current->next==NULL) {
       newNode->next=NULL;            // handles if added number is at end of list
       current->next=newNode;
     }
     else {
       newNode->next=current;         // handles all other cases
       previous->next=newNode;
     }
   }

  return 1;                           // return success
}


