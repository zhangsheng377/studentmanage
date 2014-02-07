#include "1.h"
void savedate(Student *stu)    //保存数据到文件
{
FILE *fp;
	if((fp=fopen("student.dat","wb"))==NULL)
	{
	}
	fwrite(stu,sizeof(Student),10000,fp);
	fclose(fp);
}