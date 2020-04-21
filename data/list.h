#ifndef __LIST_H__
#define __LIST_H__

#include <stdio.h>

typedef  struct Link
{
	int data;
	struct Link *Next;	
} Node;

typedef Link * List;

typedef Link * Position;

List MakeEmpty(List list);

int IsEmpty(List list);

int IsLast(Position p, List list);

Position Find(int element,List list);

void Delete(int element,List list);

Position FindPrevious(int element,List list);

void Insert(int element,List list,Position p);

void DeleteList(List list);

Position Header(List list);

Position First(List list);

Position Advance(Position p);

int Retrieve(Position p);





#endif