#include "1.h"
int main()
{
	Student stu[10000];               
	int i;
	for(i=0;i<10000;i++)
	{
		stu[i].num=0;
	}
	int type;
	do
	{
	readdate(stu);
	printf("\n请输入序号选择相应功能\n");
	printf("******** 1.显示基本信息 ********\n");
	printf("******** 2.基本信息管理 ********\n");
	printf("******** 3.学生成绩管理 ********\n");
	printf("******** 4.考试成绩统计 ********\n");
	printf("******** 5.根据条件查询 ********\n");
	printf("******** 0.退出         ********\n");
		scanf("%d",&type);
	    switch(type)
		{
		case 0:printf("");break;
		case 1:printbase(stu);break;
		case 2:managebase(stu);break;
		case 3:managescore(stu);break;
		case 4:rankscore(stu);break;
		case 5:checkbase(stu);break;
		default:printf("没有该选项，请重输");break;
		}
	}while(type!=0);
	return 0;
}