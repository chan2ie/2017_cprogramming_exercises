#include <stdio.h>
#include <string.h>

typedef struct{
    char name[33];
    int floor;
}adress;
typedef struct{
    char name[33];
    int how_many;
}menu;

typedef struct{
    adress a;
    menu m;
}order;

int main () {
    order o = {{"sogang", 0},{"bop",0}};

    printf("So, there is %s, %d floor. %d %s is going.\n", o.a.name, o.a.floor, o.m.how_many, o.m.name);

    printf("Where? ");
    scanf("%s%d", o.a.name, &o.a.floor);
    printf("What? ");
    scanf("%s%d", o.m.name, &o.m.how_many);

    printf("So, there is %s, %d floor. %d %s is going.\n", o.a.name, o.a.floor, o.m.how_many, o.m.name);

    return 0;
}
