#include "1.h"
void readdate(Student *stu)      //���ļ���ȡ���ݵ�����
{
	FILE *fp;
	if((fp=fopen("student.dat","rb"))==NULL)
	{
	}

		fread(stu,sizeof(Student),10000,fp);

	fclose(fp);
}