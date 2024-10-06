
#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib>
/*
int main(void){
    int x= get_int("Whats x? ");
    int y= get_int("Whats y? ");

    if (x<y){
        printf("x is less than y\n");
    }else if (y<x){
        printf("y is less than x\n");
    }else{
        printf("theyre equal");
    }

}
//bu önceki compare, alttaki farklı bi compare fileı

int main(void){
    char* s= get_string("i: ");
    char* t= get_string("j: ");

    if(strcmp(s,t) == 0){ //you cant say i==j , because they are not integers
        printf("Same\n");
    }
    else{
        printf("Different\n");
    }
}
*/
int main(void){
    char* s = get_string ("s: ");
    char* t = malloc(strlen(s)+1);

    t[0]= toupper(t[0]);
}
