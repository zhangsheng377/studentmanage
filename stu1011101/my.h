#include<string.h>
#include<malloc.h>
#include<conio.h>       
#include<stdlib.h>
#include <stdio.h>
#define N 4 
typedef struct student
{
	long number;
	char name[10];
    int score[N];
	struct student* next;
}Student;

char menu();
void input(Student* );
void delete(Student*);
Student* search(Student*,long);
void reexamine(Student*);
void display(Student*);
void dispnode(Student);
