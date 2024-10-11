#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void){
    string strings[] = { "theta", "bound", "search", "omega", "phone", "random"};
    string s = get_string("String: ");
    for (int i=0; i<6; i++){
        // you cant compare strings like that
        //if(strings[i]==n){
        if(strcmp(strings[i],s) == 0){ //here is so important
            printf("Found\n");
            return 0; //break, ends with success
        }
    }
    printf("Not found.\n");
    return 2; //ends the program with failure
}
