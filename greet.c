#include <stdio.h>
#include <cs50.h>
/*
int main(void){
    string name= get_string("Name: ");
    printf("%s\n",name);
}
*/

int main(int argc, string argv[]){
    if (argc == 2){
        printf("hello, %s\n", argv[1]);
    }else{
        printf("hello, world\n");
    }
}



