#include"my.h"
char course[N] [20];
void main()
{
	Student* head;
	Student* p;
	char ch;
	long num;			/*  number of students	 */
	int i;

	printf("\nEnter %d course names:\n",N);
	for(i=0;i<N;i++)
	{
		fflush(stdin);
		gets(course[i]);
	}
	p=(Student*)malloc(sizeof(Student));
	if(p==NULL)
		{
			printf("\nMemory allocation error.");
			exit(1);
		}
	else
		{
			p->number=0;
			p->next=NULL;
			strcpy(p->name,"head node");
			for(i=0;i<N;i++)
				p->score[i]=0;
			head=p;
		}
	do{
			ch=menu();

			switch(ch)
			{
				case '1':input(head);
					 			 break;
				case '2':display(head);
					       printf("\nEnter any key to continue,please:");
					       getche();
					       break;
				case '3':delete(head);
					       printf("\nEnter any key to continue,please:");
					       getche();
					       break;
				case '4':printf("\nEnter the number of student:");
					 			 scanf("%ld",&num);
					       p=search(head,num);
					       if(p==NULL)
						     	printf("\n%ld number student is not found.",num);
					       else
							printf("%d\n",p->number);
							printf("%s\n",p->name);
							printf("¿Î1£º%d\n",p->score[0]);
							printf("¿Î2£º%d\n",p->score[1]);
							printf("¿Î3£º%d\n",p->score[2]);
							printf("¿Î4£º%d\n",p->score[3]);
								 printf("\nEnter any key to continue,please:");
								 getche();
						     break;
				case '5':reexamine(head);
                 printf("\nEnter any key to continue,please:");					
					       getche();
						     break;
				case '6':printf("\nExit the program now,bye_bye!");
						     exit(0);
						     break;
				default:printf("\nYou should press <1> --- <6>");
								if(ch=='\n' || ch=='\t' || ch==' ')
									printf("\nch is white character.\n");
								else
									printf("\nch=%c\n",&ch);
					      break;
			}
	}while(1);
}
