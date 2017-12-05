#include <stdio.h>
#include <stdlib.h>

typedef struct __stack{
    int data;
    struct __stack *next;
}stack;

void printstack (int size, int stacksize, stack* sptr) {
    if(stacksize != 1){
        printstack(size, stacksize-1, sptr->next);
    }
    printf("stack[%d] : %d\n",size - stacksize, sptr->data);
}

void freestack (stack *sptr) {
    if(sptr->next != NULL){
        freestack(sptr->next);
    } 
    free(sptr);
}

int main () {
    stack *head = malloc(sizeof(stack));
    stack *tail = head;
    int stacksize = 0, num;

    while(1){
        scanf("%d",&num);

        if(num == 0){
            printstack(stacksize, stacksize, head->next);
        }
        else if(num < 0){
            printf("END\n");

            freestack(head);

            return 0;
        }
        else{
            stack *new = malloc(sizeof(stack));
            new->data = num;
            tail->next = new;
            tail = new;

            stacksize++;
        }
    }

}
