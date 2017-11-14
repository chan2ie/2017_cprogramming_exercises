#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char name[20];
    int age;
    struct Phone{
        int areacode;
        unsigned long long number;
    } phone;
}Person;

int main () {
    int num;
    FILE *fp;

    Person *per = malloc(num * sizeof(Person));

    printf("입력 할 사람의 수를 입력하시오 : ");
    scanf("%d",&num);

    fp = fopen("result.txt","w");

    for(int i = 0; i < num; i++){
        printf("이름을 입력 하시오 : ");
        scanf("%s",per[i].name);
        printf("나이를 입력 하시오 : ");
        scanf("%d",&(per[i].age));
        printf("국가 번호를 입력 하시오 : ");
        scanf("%d",&(per[i].phone.areacode));
        printf("휴대전화 번호를 입력 하시오 : ");
        scanf("%llu",&(per[i].phone.number));

        fprintf(fp,"이름 : %s 나이 : %d\n국가번호 : %d 휴대전화번호 : %011llu\n",per[i].name,per[i].age,per[i].phone.areacode,per[i].phone.number);
    }
    fclose(fp);
    free(per);

    return 0;
}
