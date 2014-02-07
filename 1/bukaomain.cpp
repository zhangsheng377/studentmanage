#include "1.h"
void bukaomain(Student *stu)    //补考人员信息
{
int type;
	do
	{
	printf("\n请输入序号选择相应功能\n");
	printf("******** 1.课程一补考人员 ********\n");
	printf("******** 2.课程二补考人员 ********\n");
	printf("******** 3.课程三补考人员 ********\n");
	printf("******** 0.退出         ********\n");
		scanf("%d",&type);
	    switch(type)
		{
		case 0:printf("");break;
		case 1:bukao(stu,type);break;
		case 2:bukao(stu,type);break;
		case 3:bukao(stu,type);break;
		default:printf("没有该选项，请重输");break;
		}
	}while(type!=0);
}