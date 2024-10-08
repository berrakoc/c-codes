#include <stdio.h>
#include <cs50.h>
#include <string.h>
/*
int string_length(string s);

int main(void){
    string name= get_string("Name: ");
    printf("%i\n",string_length(name));
}

int string_length(string s){
    int n=0;

    while (s[n] != '\0'){
        n++;
    }
    return n;
}
*/

int main(void){
    string name= get_string("Name: ");
    int string_length= strlen(name); //thanks to <string.h>
    printf("%i\n",string_length);
}
