#include <stdio.h>
#include <stdlib.h>

typedef struct __node{
    int data;
    struct __node *next;
}node;

typedef struct __list{
    struct __node *cur;
    struct __node *head;
    struct __node *tail;
}linkedList;

void createNode (linkedList *L, int data) {
    node *new_node = malloc(sizeof(node));

    new_node->data = data;

    L->cur->next = new_node;
    new_node->next = L->tail;
    L->cur = new_node;
} 

void deletLastNode (linkedList *L) {
    node *search;
    search = L->head;

    while(1){
        if(search->next == L->cur){
            break;
        }
        else{
            search = search->next;
        }
    }

    L->cur = search;
    search = L->cur->next;
    L->cur->next = L->tail;
    free(search);
}

void printNodes (linkedList *L) {
    node *search;
    search = L->head->next;

    while(1){
        printf(" %d, ",search->data);

        search = search->next;

        if(search == L->tail){
         break;
        }
    }
}

void inversePrint (linkedList *L) {
    node *search;

    while(1){
        search = L->head;
        
        while(1){
            if(search->next == L->cur){
                break;
            }   
            else{
                search = search->next;
            }
        }

        printf(" %d,",L->cur->data);
        
        L->cur = search;

        if(search == L->head){
            break;
        }
    }

    while(1){
        if(search->next == L->tail){
            break;
        }
        else{
            search = search->next;
        }
    }
    L->cur = search;
}

void freeList (linkedList *L, node *node_free){
    if(node_free != L->tail){
        freeList(L, node_free->next);
    }
    free(node_free);
}

int main () {
    int num, num_add;
    linkedList *L = malloc(sizeof(linkedList));
    node *head = malloc(sizeof(node));
    node *tail = malloc(sizeof(node));
        
    head->next = tail;

    L->head = head;
    L->cur = head;
    L->tail = tail;

    while(1){
        printf("1. createNode\n");
        printf("2. deletLastNode\n");
        printf("3. printNodes\n");
        printf("4. inversePrint\n");
        printf("5. end program\n\n");
    
        printf("Input number : ");
        scanf("%d",&num);

        switch(num){
            case 1 : 
                printf("Input a number : ");
                scanf("%d",&num_add);

                createNode(L, num_add);
                break;

            case 2:
                deletLastNode(L);
                break;

            case 3:
                printf("[");
                printNodes(L);
                printf(" ] \n");
                break;

            case 4:
                printf("[");
                inversePrint(L);
                printf(" ]\n");
                break;

            case 5:
                freeList(L, L->head);
                free(L);
                return 0;
        }
    }
}
