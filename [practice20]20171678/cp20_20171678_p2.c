#include <stdio.h>
#include <stdlib.h>

typedef struct _NODE{
    int DATA;
    struct _NODE *LINK;
}NODE;

NODE *head;

void FreeNode (NODE *n) {
    if(n->LINK == NULL) ;
    else FreeNode (n->LINK);

    free(n);
    return;
}

void InsertNodeAtFront (int num) {
    NODE *new = malloc(sizeof(NODE));
    
    if(head->LINK == NULL){
        head->LINK = new;
    }
    else{
        NODE *temp = head->LINK;
        head->LINK = new;
        new->LINK = temp;
    }

    new->DATA = num;
    
}

void InsertNodeAtBack (int num) {
    NODE *new = malloc(sizeof(NODE));
    NODE *nptr;
    
    nptr = head;

    while(1){
        if(nptr->LINK == NULL){
            nptr->LINK = new;
            break;
        }    
        nptr = nptr->LINK;
    }

    new->DATA = num;
}

void PrintList () {
    NODE *search;
    search = head->LINK;

    while(1){
        printf("%d ", search->DATA);
        search = search->LINK;
        if(search == NULL){
            printf("\n");
            break;
        }
    }
}

int main () {
    int num;

    head = malloc(sizeof(NODE));
    
    printf("Insert node at front : ");
    scanf("%d",&num);
    InsertNodeAtFront(num);

    printf("Insert node at front : ");
    scanf("%d",&num);
    InsertNodeAtFront(num);

    printf("Insert node at front : ");
    scanf("%d",&num);
    InsertNodeAtFront(num);

    printf("Insert node at back : ");
    scanf("%d",&num);
    InsertNodeAtBack(num);

    printf("Insert node at back : ");
    scanf("%d",&num);
    InsertNodeAtBack(num);

    printf("Print the list : ");
    PrintList();

    FreeNode(head);
}
