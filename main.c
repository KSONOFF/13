#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_NAME 10

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct student{
	int id;
	char name[MAX_NAME];
	double grade;
	
};	
int main(int argc, char *argv[]) {
	
	struct student s1;
	
	s1.id = 1234;
	strcpy(s1.name,"seungwon");
	s1.grade = 4.3;
	
	printf("ID : %i\n", s1.id);
	printf("NAME : %s\n",s1.name);
	printf("GRADE : %lf\n", s1.grade);
	
	return 0;
}
