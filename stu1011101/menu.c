#include"my.h"
char menu()
{
	char ch;


	printf("\n\n\t1 --- Input\n");
	printf("\n\t2 --- Display\n");
	printf("\n\t3 --- delete\n");
	printf("\n\t4 --- Search\n");
	printf("\n\t5 --- Reexamine\n");
	printf("\n\n\t6 --- Exit\n");
	printf("\n\n\t\t Enter your choice:");

	fflush(stdin);
	ch=getche();
	getche();	/* 	wait for <ENTER> 	*/
	return ch;
}
