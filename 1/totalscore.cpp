#include "1.h"
void totalscore(Student *stu)    //����ѧ���ܷ�
{
	int i;
	for(i=0;i<10000;i++)
	{
		stu[i].total=0;
		if (stu[i].num!=0) stu[i].total=stu[i].score[0]+stu[i].score[1]+stu[i].score[2];
	}
	printf("����ɹ���");
savedate(stu);
}