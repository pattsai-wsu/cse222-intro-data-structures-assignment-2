#include "header.h"

/*
Name: Patrick Tsai
Class: CSE 222 10 AM M-F
Assignment #: Programming Assignment 2 Due Feb 3 8:00 AM

Synopsis: This program implements a linked list. Users can Insert to, Delete from, Search for, Print. Numbers are sorted from least to greatest, using linked list attributes and functionality.
*/

int main() {
  char command[120], temp[120], badTemp[120],  action, nextChar, nullSet;
  int x, returnVal, addReturnVal, valueFound, getIndexCurrent, getIndexPrevious, badValTemp;
  struct node *searchEmptyList;  //use if you want to know if the list is empty

  LinkedList list;

  list=init();

  while(1) {
    searchEmptyList=list->next; //flag for empty list

    printf("> ");
    fgets(command, 120, stdin);
    returnVal=sscanf(command, "%s %d%s", temp, &x, badTemp);
    action=temp[0];
    nextChar=temp[1];

    // INSERT  ascii 105 = i
    if (returnVal==2 && action==105 && nextChar=='\0') {    
      if (searchEmptyList == NULL) {          // if clause used to signify empty list, might want to in future
         addReturnVal=add(list, x);           // if it is empty, then run add function
         if (addReturnVal == 1) {             // if return value from add function is 1 then it was successful
           printf("SUCCESS\n");
         }
         else {
           printf("ERROR - BAD CODE\n");      // this should never print - suggests an empty list and no more room in structure
         }
      }
      else {

        valueFound=search(list, x);          // this sets the return value from the search function

        if (valueFound==1) {                 // if return value 1 then node already in list
          printf("NODE ALREADY IN LIST\n");
        }
        else {
          addReturnVal=add(list, x);         // if return is 0, the number not in list and
                                             // will run the add function
          if (addReturnVal == 1) {           // if return value from add function is 1
            printf("SUCCESS\n");             // then the add function added the number successfully
          }
          else {                             // if return value is 0, then there is no more space in structure
            printf("OUT OF SPACE\n");
          }
        }
      }
    }

    // SEARCH  ascii 115 = s
    else if (returnVal==2 && action==115 && nextChar=='\0') {
      if (searchEmptyList == NULL) {         // if there is ann empty list then should print out
        printf("NOT FOUND\n");               // not found because list is empty
      }                                      // therefore, don't have to run the search function
      else {
        valueFound=search(list, x);          // runs the search function
        if (valueFound==1) {                 // if return value is 1, then number was found
          printf("FOUND\n");
        }
        else {
          printf("NOT FOUND\n");             // if return value is 0, the the number wasn't found
        }

      }
    }

    // DELETE  ascii 100 = d
    else if (returnVal==2 && action==100 && nextChar=='\0') {
      if (searchEmptyList == NULL) {         // if the list is empty, then you don't have to run delete function
        printf("NODE NOT FOUND\n");          // and can print node not found
      }
      else {
        valueFound=search(list, x);          // run search function to find number
        if (valueFound==1) {                 // if the number is found, then run the delete function
          delete(list, x);                   // if return value is 1 then it has deleted successfully
          printf("SUCCESS\n");
        }
        else {                               // if search returns 0, then number is not in list
          printf("NODE NOT FOUND\n");
        }
      }
    }

    // PRINT  ascii 112 = p
    else if (returnVal==1 && action==112 && 0==(strcmp(command, "p\n"))) {
      print(list);                           // run the print function, will print all values in list
    }

    // EXIT  ascii 120 = x
    else if (returnVal==1 && action=='x' &&  0==(strcmp(command, "x\n"))) {
      break;                                 // exit breaks the while loop and ends the program
    }

    // HELP
    else {                                   // help will run if the input is not good
      help();
    }
  }

release_all(list);                           // release all function frees all the malloc'd memory

return 0;
}
