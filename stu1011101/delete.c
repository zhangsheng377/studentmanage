#include "my.h"

void delete(Student *h)
{
	Student *p,*q;
	int num;
	char answer;
	

	printf ("\nEnter  number of the student being deleted:");
	scanf("%ld",&num);
	q=search(h,num);
	if(q!=NULL)
	{
		p=q->next;
			printf("%d\n",q->number);
			printf("%s\n",q->name);
			printf("¿Î1£º%d\n",q->score[0]);
			printf("¿Î2£º%d\n",q->score[1]);
			printf("¿Î3£º%d\n",q->score[2]);
			printf("¿Î4£º%d\n",q->score[3]);
		printf("\nDelete the student,are you sure?(Y/N):");
		fflush(stdin);
		answer=getche();
		answer=tolower(answer);
		if(answer=='y')
		{
			q->next=p->next;
			free(p);
			h->number--;
		}
		else
		{
			printf("\n You change your idea,bye_bye.");
		}
	}
	else
	{
		printf("\nThe student to be deleted is not found.");
	}
} 			
