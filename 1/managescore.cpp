#include "1.h"
void managescore(Student *stu)    //学生成绩管理
{
int type;
	do
	{
	printf("\n请输入序号选择相应功能\n");
	printf("******** 1.计算学生总分 ********\n");
	printf("******** 2.根据总分排名 ********\n");
	printf("******** 3.补考人员信息 ********\n");
	printf("******** 0.退出         ********\n");
		scanf("%d",&type);
	    switch(type)
		{
		case 0:printf("");break;
		case 1:totalscore(stu);break;
		case 2:ranktotal(stu);break;
		case 3:bukaomain(stu);break;
		default:printf("没有该选项，请重输");break;
		}
	}while(type!=0);
}