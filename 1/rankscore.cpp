#include "1.h"
void rankscore(Student *stu)    //���Գɼ�ͳ��
{
int type;
	do
	{
	printf("\n���������ѡ����Ӧ����\n");
	printf("******** 1.��γ���߷� ********\n");
	printf("******** 2.��γ���ͷ� ********\n");
	printf("******** 3.��γ�ƽ���� ********\n");
	printf("******** 0.�˳�         ********\n");
		scanf("%d",&type);
	    switch(type)
		{
		case 0:printf("");break;
		case 1:maxscore(stu);break;
		case 2:minscore(stu);break;
		case 3:avescore(stu);break;
		default:printf("û�и�ѡ�������");break;
		}
	}while(type!=0);
}