#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>
int size,top=-1,*a;
void createstack(int s)
{
size=s;
a=malloc(sizeof(size));
}
void push(int item)
{
	if(isfull())
		{
		 printf("stack full");

		}
	else
		{
		  a[++top]=item;	
		
		}

}



int pop()
{
	if(isempty())
		{
		 return 0;;

		}
	else
		{
		  return a[top--];	
		
		}

}
