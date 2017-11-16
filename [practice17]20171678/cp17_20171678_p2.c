#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char name[10];
    char phone[20];
    char sex[10];
    char job[20];
}Customer;

void init (Customer *cus, FILE *fp, int num_customer) {
    for(int i = 0; i < num_customer; i++){
        fscanf(fp,"%s %s %s %s", cus[i].name, cus[i].phone, cus[i].sex, cus[i].job);
    }
}

void Update (Customer *cus, char *name) {
    int i, option;
    char info[20];

    for(i = 0; i >= 0; i++){
        if(strcmp(name, cus[i].name) == 0){
            break;
    }
    }
    
    printf("Input Update information\n1 : Phone, 2 : Job\nInput : ");
    scanf("%d", &option);
    scanf("%s", info);

    if(option == 1){
        strcpy(cus[i].phone,info);
    }
    else{
        strcpy(cus[i].job,info);
    }

}

int main () {
    FILE * fp;
    int num, check = 0, cont;
    char name[10];
    Customer *c;

    fp = fopen("input.txt","r");

    fscanf(fp,"%d",&num);
    
    c = malloc(num*sizeof(Customer));

    init(c, fp, num);

    printf("Customer Information\n--------------------\n");
    
    for(int i = 0; i < num; i++){
        printf("%d %s %s %s %s\n", i+1, c[i].name, c[i].phone, c[i].sex, c[i].job);
    }

    while(1){
        printf("\nUpdate profile\n");
        printf("Input name : ");
        scanf("%s",name);

        check = 0;
        for(int i = 0; i < num; i++){
            if(strcmp(name, c[i].name) == 0){
                check = 1;
                break;
            }
        }

        if(check == 0){
            printf("None\n");
        }
        else{
            Update(c, name);
        }

        printf("Continue (Yes : 1 / No : 2) : ");
        scanf("%d", &cont);

        if(cont == 2){
            break;
        }
    }

    printf("\nResult Customer Information\n----------------------\n");

    for(int i = 0; i < num; i++){
        printf("%d %s %s %s %s\n", i+1, c[i].name, c[i].phone, c[i].sex, c[i].job);
    }
    printf("----------------------\n");

    fclose(fp);
    free(c);

    return 0;
}
