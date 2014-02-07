#include "1.h"
void managebase(Student *stu)    //基本信息管理
{
	int type;
	do
	{
	printf("\n请输入序号选择相应功能\n");
	printf("******** 1.插入学生记录 ********\n");
	printf("******** 2.删除学生记录 ********\n");
	printf("******** 3.修改学生记录 ********\n");
	printf("******** 0.退出         ********\n");
		scanf("%d",&type);
	    switch(type)
		{
		case 0:printf("");break;
		case 1:adddate(stu);break;
		case 2:deldate(stu);break;
		case 3:alterdate(stu);break;
		default:printf("没有该选项，请重输");break;
		}
	}while(type!=0);
}