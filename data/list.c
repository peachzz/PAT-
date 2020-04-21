#include "list.h"

List MakeEmpty(List list)
{
	List l;
	l = malloc(sizeof(struct Node));
	l->data = 0;
	l->Next = NULL;

	return l;
}

int IsEmpty(List list)
{
	return list->Next == NULL;
}

int IsLast(Position p, List list)
{
	return P->Next == NULL;
}

Position Find(int element,List list)
{
	Position p = list;
	while(p != NULL && p->data != element)
	{
		p = p->Next;
	}
	return p;
}

void Delete(int element,List list)
{
	Position p,temp;
	p = FindPrevious(element,list); //上一个列表

	if(!IsLast(element,list))
	{
		temp = p->Next;
		p->Next = temp->Next;
		free(temp);
	}
}

Position FindPrevious(int element,List list)
{
	Position p = list;
	while(p != NULL && p->Next->data != element)
	{
		p = p->Next;
	}
	return p;
}
void Insert(int element,List list,Position p)
{
	Position position;
	position = malloc(sizeof(struct Node));

	if(position == NULL)
		printf("Out of space!!!\n");

	position->data = element;
	position->Next = p->Next;
	p->Next = position;
}

void DeleteList(List list);

Position Header(List list);

Position First(List list);

Position Advance(Position p);

int Retrieve(Position p);
