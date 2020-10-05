#include <stdio.h>

/*
This is a listing of commands and their use.
It should appear when the user enters an invalid command.
*/

void help() {                                                    // Lists out a description of all the
printf("List of Commands\n");                                    // valid commands
printf("> i [number] - INSERTS [number] in LIST\n");             // insert into list
printf("> d [number] - DELETES [number] in LIST\n");             // delete from list
printf("> s [number] - SEARCHES for [number] in LIST\n");        // search list
printf("> v [number] - DISPLAYS [number] of INDEX ENTRIES\n");   // view - displays number of linked list  element fields
printf("> p - PRINTS the LIST\n");                               // prints all numbers in the currrent list
printf("> x - EXITS PROGRAM\n");                                 // exits program
}
