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
			printf("��1��%d\n",p->score[0]);
			printf("��2��%d\n",p->score[1]);
			printf("��3��%d\n",p->score[2]);
			printf("��4��%d\n",p->score[3]);
			p=p->next;
		};
	}
	
}	 
