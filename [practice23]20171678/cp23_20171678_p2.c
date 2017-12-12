#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct __node{
    char command[10];
    struct __node *next;
}node;

typedef struct __queue{
    node *front;
    int count;
    node *rear;
}queue;

void enqueue_command(queue *q, char command[]){
    node *new = malloc(sizeof(node));

    strcpy(new->command, command);

    if(q->count == 0){
        q->front = new;
        q->rear = new;
    }
    else{
        q->rear->next = new;
        q->rear = new;
    }

    q->count++;
}

int main () {
    char command[10];
    queue *q = malloc(sizeof(queue));

    q->front = NULL;
    q->count = 0;
    q->rear = NULL;

    while(1){
        printf(">>");
        scanf("%s",command);

        if(strcmp(command, "h") == 0 || strcmp(command,"history") == 0){
            printf("queue count = %d\n", q->count);
        }
        else if(strcmp(command, "quit") == 0 || strcmp(command, "q") == 0){
            break;
        }
        else{
            enqueue_command(q, command);
        }
    }

    return 0;
}
