#include "1.h"
void rankscore(Student *stu)    //考试成绩统计
{
int type;
	do
	{
	printf("\n请输入序号选择相应功能\n");
	printf("******** 1.求课程最高分 ********\n");
	printf("******** 2.求课程最低分 ********\n");
	printf("******** 3.求课程平均分 ********\n");
	printf("******** 0.退出         ********\n");
		scanf("%d",&type);
	    switch(type)
		{
		case 0:printf("");break;
		case 1:maxscore(stu);break;
		case 2:minscore(stu);break;
		case 3:avescore(stu);break;
		default:printf("没有该选项，请重输");break;
		}
	}while(type!=0);
}