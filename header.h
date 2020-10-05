#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MYNULL NULL

struct node {
  int data;
  struct node* next;
};

typedef struct node* LinkedList;

struct node* init();
void get_indexes(struct node*, int, struct node*, struct node*);
int add(struct node*, int);
void print(struct node*);
int search(struct node*, int);
int delete(struct node*, int);
void release_node(struct node*);
void release_all(struct node*);
void help();

