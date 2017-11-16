#include <stdio.h>

typedef struct {
    int num1;
    int num2;
    int num3;
}Node;

void getFr (Node *a) {
    printf("Input num1, num2 : ");
    scanf("%d%d", &(a->num1), &(a->num2));
}

void sort_mul (Node *a) {
    if(a->num1 > a->num2){
        int swap;
        
        swap = a->num1;
        a->num1 = a->num2;
        a->num2 = swap;
    }

    a->num3 = a->num1 * a->num2;
}

void printFr (Node *a) {\
    printf("Result : %d %d %d\n", a->num1, a->num2, a->num3);
}

int main () {
    Node a;

    getFr(&a);
    sort_mul(&a);
    printFr(&a);

    return 0;
}
