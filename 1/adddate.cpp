#include "1.h"
void adddate(Student *stu)    //插入学生记录（其实就是直接添加，之后再统一排序）
{
	char c[20];
	int a;
	int b;
	int j;
	int i;
	for(i=0;i<10000;i++)
	{

while(stu[i].num!=0)
{
	i++;
}

			printf("请输入学号（输入0退出）：");	
			scanf("%d",&a);
			if (a==0) break;
	for(j=0;j<10000;j++)
	{
			if (stu[j].num==a) printf("学号重复!");
			if (stu[j].num==a) b=1;
	}
			if (b==1) break;
			stu[i].num=a;
			printf("请输入姓名：");		
			scanf("%s",&c);
		    strcpy(stu[i].name,c);

			printf("请输入性别：");	
			scanf("%s",&stu[i].sex);

			printf("请输入成绩一：");	
			scanf("%d",&stu[i].score[0]);

			printf("请输入成绩二：");	
			scanf("%d",&stu[i].score[1]);

			printf("请输入成绩三：");	
			scanf("%d",&stu[i].score[2]);

			printf("\n");
			stu[i].total=0;

			stu[i].rank=0;
	}

savedate(stu);

	if (b==1) printf("\n");
	if (b==1) adddate(stu);
}
