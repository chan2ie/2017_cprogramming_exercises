#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum Sex {Male, Female};

typedef struct{
	float mid;
	float final;
    float proj;
}Points;

typedef struct{
	int studentId;
    char name[40];
	enum Sex sex;
	float marks;
	char grade[3];
	Points subject;
}Grades;

int main () {
	FILE *fp;
	int stu_num;
    char firstname[40], lastname[40], stu_sex[7];
	fp = fopen("input[10].txt", "r");

	fscanf(fp,"%d",&stu_num);

    Grades *stu_list = malloc(stu_num * sizeof(Grades));

    for(int i = 0; i < stu_num; i++){
        
        fscanf(fp,"%d / %s %s / %s /%f / %f / %f",&(stu_list[i].studentId),firstname,lastname,stu_sex,&(stu_list[i].subject.mid),&(stu_list[i].subject.final),&(stu_list[i].subject.proj));

        int count = 0;

        strcpy(stu_list[i].name,firstname);
        strcat(stu_list[i].name," ");
        strcat(stu_list[i].name,lastname);

        if(strcmp(stu_sex,"Female") == 0 ) {
            stu_list[i].sex = 1;
        }
        else{
            stu_list[i].sex = 0;
        }
        
        stu_list[i].marks = (float)(stu_list[i].subject.mid * 0.3 + stu_list[i].subject.final * 0.3 + stu_list[i].subject.proj * 0.4);

        if(stu_list[i].marks < 50){
            stu_list[i].grade[0] = 'F';
            stu_list[i].grade[1] = '\0';
        }
        if(50 <= stu_list[i].marks && stu_list[i].marks < 70){
            stu_list[i].grade[0] = 'C';
            stu_list[i].grade[1] = '+';
            stu_list[i].grade[2] = '\0';
        }
        if(70 <= stu_list[i].marks && stu_list[i].marks < 80){
            stu_list[i].grade[0] = 'B';
            stu_list[i].grade[1] = '+';
            stu_list[i].grade[2] = '\0';
        }
        if(80 <= stu_list[i].marks ){
            stu_list[i].grade[0] = 'A';
            stu_list[i].grade[1] = '+';
            stu_list[i].grade[2] = '\0';
        }
    }

    printf("-- Student List --\n");

    for(int i = 0; i <stu_num; i++){
        printf("\tId : %d\n",stu_list[i].studentId);
        printf("\tName : %s ,(%d)\n",stu_list[i].name,stu_list[i].sex);
        printf("\tGrade(mid) : %.2f\n",stu_list[i].subject.mid);
        printf("\tGrade(final) : %.2f\n",stu_list[i].subject.final);
        printf("\tGrade(Project) : %.2f\n",stu_list[i].subject.proj);
        printf("\t%s(%.2f)\n\n",stu_list[i].grade,stu_list[i].marks);
    }
    fclose(fp);
}
