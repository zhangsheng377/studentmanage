#include "stdio.h"
#include "string.h"
#define printdate printf("\n学号：%d\n姓名：%s\n性别：%s\n成绩一：%d\n成绩二：%d\n成绩三：%d\n总分：%d\n排名：%d\n",stu[i].num,&stu[i].name,&stu[i].sex,stu[i].score[0],stu[i].score[1],stu[i].score[2],stu[i].total,stu[i].rank)


struct Student
{
	int num;
	char name[20];
	char sex[10];
	int score[4];
	int total;
	int rank;
};
typedef struct Student Student;


void readdate(Student *stu);
void printbase(Student *stu);
void managebase(Student *stu);
void adddate(Student *stu);
void savedate(Student *stu);
void deldate(Student *stu);
void alterdate(Student *stu);
void managescore(Student *stu);
void totalscore(Student *stu);
void ranktotal(Student *stu);
void rankscore(Student *stu);
void maxscore(Student *stu);
void max(Student *stu,int type);
void minscore(Student *stu);
void min(Student *stu,int type);
void avescore(Student *stu);
void ave(Student *stu,int type);
void checkbase(Student *stu);
void checknum(Student *stu);
void checkname(Student *stu);
void checkrank(Student *stu);
void bukaomain(Student *stu);
void bukao(Student *stu,int type);