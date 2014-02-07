#include "1.h"
void maxscore(Student *stu)    //求课程最高分
{
int type;
	do
	{
	printf("\n请输入序号选择相应功能\n");
	printf("******** 1.求课程一最高分 ********\n");
	printf("******** 2.求课程二最高分 ********\n");
	printf("******** 3.求课程三最高分 ********\n");
	printf("******** 0.退出         ********\n");
		scanf("%d",&type);
	    switch(type)
		{
		case 0:printf("");break;
		case 1:max(stu,type);break;
		case 2:max(stu,type);break;
		case 3:max(stu,type);break;
		default:printf("没有该选项，请重输");break;
		}
	}while(type!=0);
}