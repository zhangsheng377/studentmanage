#include"my.h"

Student* search(Student* h,long num)
{
	Student *p,*q;

	q=h;
	p=h->next;
	if(p==NULL)
		return NULL;
	else
		{
			while(p!=NULL && p->number!=num)
			{
				q=p;
				p=p->next;
			}
			if(p!=NULL && p->number==num)
				return p;
			else
				return NULL;

		}
}
