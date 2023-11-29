#ifndef _LIST_H_
#define _LIST_H_

#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int number;
	struct node *next;
}
node;
typedef struct class1
{
	int data;
	struct class1 *next;
}class1;

int don(int argc, char *argv[]);
void enterdetails(int adm, char *names[]);


#endif
