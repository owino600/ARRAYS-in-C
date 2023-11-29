#include "list.h"
void enterdetails(int adm, char *names[])
{
	int data = adm;
	struct class1 *list = NULL;

	struct class1 *newnode = (struct class1*) malloc(sizeof(struct class1));

	if (newnode == NULL)
	{
		return;
	}
	newnode -> data = data;
	newnode -> next = list; /* point to old node */
	list = newnode; /* old node point to new node */
}
