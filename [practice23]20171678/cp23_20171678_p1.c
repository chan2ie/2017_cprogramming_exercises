#include <stdio.h>
#include <stdlib.h>

typedef struct __node {
    int data;
    struct __node *link;
} node;

typedef struct {
    int count;
    struct __node *top;
} stack;

void push (stack *s){
    node *new = malloc(sizeof(node));

    if(s->count == 0){
        s->top = new;
    }
    else{
        new->link = s->top;
        s->top = new;
    }
    
    s->count++;
}

void pop(stack *s){
    node *nptr;

    nptr = s->top;
    s->top = s->top->link;
    free(nptr);

    s->count--;

}

int main () {
    stack *s = malloc(sizeof(stack));
    char test[100];
    int i = 0;

    scanf("%s",test);

    while(1){
        if(test[i] == '(' || test[i] == '[' || test[i] == '{'){
            push(s);
        }

        if(test[i] == ')' || test[i] == ']' || test[i] == '}'){
            if(s->count == 0){
                printf("Unmatched Parentheses!\n");
                free(s);
                return 0;
            }
            pop(s);
        }

        if(test[i] == '\0'){
            break;
        }

        i++;
    }
    
    if(s->count != 0){
        printf("Unmatched Parentheses!\n");
        while(s->count > 0){
            pop(s);
        }
        free(s);
        return 0;
    }

    printf("Matched Parentheses!\n");
    free(s);
    return 0;
}
