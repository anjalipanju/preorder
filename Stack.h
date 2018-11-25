#include<stdio.h> 
struct tNode 
{ 

   int data; 

   struct tNode* left; 

   struct tNode* right; 
}; 
struct sNode 
{ 

  struct tNode *t; 

  struct sNode *next; 
}; 

/* Stack related functions */

void push(struct sNode** top_ref, struct tNode *t); 

struct tNode *pop(struct sNode** top_ref); 

bool isEmpty(struct sNode *top); 

  
