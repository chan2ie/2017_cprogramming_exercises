#include <stdio.h>
#include <stdlib.h>

typedef struct _NODE{
    char DATA;
    struct _NODE *LINK;
}NODE;

NODE *head;

void FreeNode (NODE *n) {
    if(n->LINK == NULL) ;
    else FreeNode (n->LINK);

    free(n);
    return;
}

void InsertNodeAtFront (char dat) {
    NODE *new = malloc(sizeof(NODE));
    NODE *nptr;

    if(head == NULL){
        head = new;
    }
    else{
        nptr = head;
        head = new;
        new->LINK = nptr;
    }
    new->DATA = dat;
} 

void PrintList () {
    NODE *search;
    search = head;
    
    while(1){
        printf("%c",search->DATA);
        search = search->LINK;

        if(search == NULL){
            printf("\n");
            break;
        }
    }
    FreeNode(head);
}

int main () {
    
    InsertNodeAtFront('e');
    InsertNodeAtFront('l');
    InsertNodeAtFront('p');
    InsertNodeAtFront('p');
    InsertNodeAtFront('a');
    PrintList();

    return 0;

}
