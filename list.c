#include <stdio.h>
#include <stdlib.h>
/*
int main(void){

    //int list[3];
    int *list= malloc(3 * sizeof(int));
    if(list == NULL){
        return 1;
    }

    list[0]=1;
    list[1]=2;
    list[2]=3;

    int *tmp=malloc(4 * sizeof(int));
    if(tmp == NULL){
        free(list);
        return 1;
    }

    for(int i=0; i<3; i++){
        tmp[i]=list[i];
    }
    tmp[3]=4;
    free(list);
    list=tmp;

    for(int i=0; i<4; i++){
        printf("%i\n",list[i]);
    }
    free(list);
    return 0;
}
*/
/*
typedef struct node{
    int number;
    struct node *next;
}node;

int main(int argc, char *argv[]){
    node *list= NULL;

    for(int i=1; i<argc; i++){
        int number=atoi(argv[i]);
        node *n= malloc(sizeof(node));
        if(n==NULL){
            // Free memory thus far
            return 1;
        }
        n->number=number;
        n->next=list;
        list=n;
    }
    // Print whole list
    node *ptr = list;
    while(ptr != NULL){

        printf("%i\n", ptr->number);
        ptr = ptr ->next;

    }
}*/
typedef struct node{
    int number;
    struct node *next;
}node;

int main(int argc, char *argv[]){
    node *list= NULL;

    for(int i=1; i<argc; i++){
        int number=atoi(argv[i]);
        node *n= malloc(sizeof(node));
        if(n==NULL){
            return 1;
        }
        n->number=number;
        n->next=NULL;

        // If list is emty
        if(list == NULL){
            list=n;
        }
        //If number belongs at beginning of list
        else if(n->number < list->number){
            n->next=list;
            list=n;
        }
        //If number belongs later in list
        else{
            //Iterate over nodes in list
            for(node *ptr = list; ptr != NULL; ptr = ptr->next){
                //if at end of list
                if(ptr->next == NULL){
                    //Append node
                    ptr->next = n;
                    break;
                }

                //If in middle of list
                if(n->number < ptr->next->number){
                    n->next= ptr->next;
                    ptr->next=n;
                    break;
                }
            }
        }
    }
    // Print whole list
    node *ptr = list;
    while(ptr != NULL){

        printf("%i\n", ptr->number);
        ptr = ptr ->next;

    }
}

