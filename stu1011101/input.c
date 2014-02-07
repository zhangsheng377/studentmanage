#include"my.h"
extern char course[N][20];
void input(Student* h)
{
	long num;
	Student *p,*q,*r;
	int i,n=0;		/* n is number of inserted in one calling 	*/


	printf("\nEnter data for a student:\n");
	printf("\nNumber:");
	scanf("%ld",&num);
	while(num>0)
	{
		p=search(h,num);
		if(p!=NULL)
		{
				printf("\n%ld number student has been existed.",num);
				printf("\nReenter number for a student,please:");
				fflush(stdin);
				scanf("%ld",&num);
		}
		else
			{
				p=(Student*)malloc(sizeof(Student));
				if(p==NULL)
					{
						printf("\nMemory allocation error.");
						exit(1);
					}
				else
					{
						n++;		/* increments number of students */
						p->number=num;
						printf("\nName:");
						fflush(stdin);
						gets(p->name);
						printf("\nEnter %d examine scores:",N);
						for(i=0;i<N;i++)
						{
							printf("\n%s:\t",course[i]);
							scanf("%d",&p->score[i]);
						}
				  }
					r=h;
					q=r->next;
					while(q!=NULL && num>q->number)
					{
						r=q;
						q=q->next;
					}
					r->next=p;
					p->next=q;					

					printf("\nEnter data for a student:\n");
					printf("\nNumber:");
					scanf("%ld",&num);
 	 	}
	}
   h->number +=n;
 	 printf("\n There are(is) %d student(s) were(was) inserted.",n);
 	 printf("\n There are(is) total %ld student(s).",h->number);
}
