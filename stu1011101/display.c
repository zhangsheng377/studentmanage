#include"my.h"


void display(Student* h)
{
	Student* p;

	if(h->number==0)
		printf("\nThere is no student in the list.\n");
	else
	{
		p=h->next;
		
		while(p!=NULL)
		{
			printf("%d\n",p->number);
			printf("%s\n",p->name);
			printf("¿Î1£º%d\n",p->score[0]);
			printf("¿Î2£º%d\n",p->score[1]);
			printf("¿Î3£º%d\n",p->score[2]);
			printf("¿Î4£º%d\n",p->score[3]);
			p=p->next;
		};
	}
	
}	 
