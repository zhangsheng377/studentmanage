#include "1.h"
void readdate(Student *stu)      //从文件读取数据到数组
{
	FILE *fp;
	if((fp=fopen("student.dat","rb"))==NULL)
	{
	}

		fread(stu,sizeof(Student),10000,fp);

	fclose(fp);
}