#include "1.h"
void avescore(Student *stu)    //求课程平均分
{
int type;
	do
	{
	printf("\n请输入序号选择相应功能\n");
	printf("******** 1.求课程一平均分 ********\n");
	printf("******** 2.求课程二平均分 ********\n");
	printf("******** 3.求课程三平均分 ********\n");
	printf("******** 0.退出         ********\n");
		scanf("%d",&type);
	    switch(type)
		{
		case 0:printf("");break;
		case 1:ave(stu,type);break;
		case 2:ave(stu,type);break;
		case 3:ave(stu,type);break;
		default:printf("没有该选项，请重输");break;
		}
	}while(type!=0);
}