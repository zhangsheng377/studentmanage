#include"my.h"

void reexamine(Student* h)
{
	Student *p;
	int pass;		/* logic var. */
	int i;
	int nopass=0;			/* number of no-pass student   */
	

	if(h->number==0)
		printf("\nThere is no student in the list.");
	else
		{
				p=h->next;
				while(p!=NULL)
				{
					pass=1;
					for(i=0;i<N;i++)
					{
						if(p->score[i]<60)
							{
								pass=0;
								nopass++;
								break;
							}
					}
					if(pass==0)
					{
			printf("%d\n",p->number);
			printf("%s\n",p->name);
			printf("¿Î1£º%d\n",p->score[0]);
			printf("¿Î2£º%d\n",p->score[1]);
			printf("¿Î3£º%d\n",p->score[2]);
			printf("¿Î4£º%d\n",p->score[3]);
						printf("\nEnter any key to continue,please:");
						getche();
					}
					p=p->next;
				}
				printf("\n\nThere %s total %ld student(s)",h->number>1?"are":"is",h->number);
				printf("\nincluded %d student%c no-pass.",nopass,nopass>1?'s':' ');
				printf("\nNo-pass percentage is %.2f%%.\n",(float)(nopass)/h->number *100);
		}
}
