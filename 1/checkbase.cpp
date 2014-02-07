#include "1.h"
void checkbase(Student *stu)    //根据条件查询
{
int type;
	do
	{
	printf("\n请输入序号选择相应功能\n");
	printf("******** 1.按学号查询 ********\n");
	printf("******** 2.按姓名查询 ********\n");
	printf("******** 3.按名次查询 ********\n");
	printf("******** 0.退出       ********\n");
		scanf("%d",&type);
	    switch(type)
		{
		case 0:printf("");break;
		case 1:checknum(stu);break;
		case 2:checkname(stu);break;
		case 3:checkrank(stu);break;
		default:printf("没有该选项，请重输");break;
		}
	}while(type!=0);
}