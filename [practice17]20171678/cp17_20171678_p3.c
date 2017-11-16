#include <stdio.h>
#include <stdlib.h>

struct struct_node{
    int num;
    struct struct_node *one;
    struct struct_node *two;
};

int main () {
    struct struct_node *first = malloc(sizeof(struct struct_node));
    struct struct_node *one = malloc(sizeof(struct struct_node));
    first->one = one;
    struct struct_node *two = malloc(sizeof(struct struct_node));
    first->two = two;

    first->num = 1;
    one->num = 2;
    two->num = 3;

    printf("first-%d one-%d two-%d\n",first->num,one->num,two->num);

    free(first);
    free(one);
    free(two);
    return 0;
}
