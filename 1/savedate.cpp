#include "1.h"
void savedate(Student *stu)    //�������ݵ��ļ�
{
FILE *fp;
	if((fp=fopen("student.dat","wb"))==NULL)
	{
	}
	fwrite(stu,sizeof(Student),10000,fp);
	fclose(fp);
}