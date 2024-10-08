#include <stdio.h>
#include <cs50.h>
#include <string.h>

/*
int main(void){
    string names[] = {"Berra", "Katre", "Zeyneb"};
    string numbers[] = {"1234", "4444", "3333"};

    string name = get_string("Name: ");

    for (int i=0; i<3; i++){

        if(strcmp(names[i],name)==0){

            printf("Found %s\n", numbers[i]);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}
*/
int main(void){

    typedef struct{
        string name;
        string number;
    }person;

    person people[3];
    string name = get_string("Name: ");

    people[0].name= "Berra";
    people[0].number= "1234";

    people[1].name= "Katre";
    people[1].number= "4444";

    people[1].name = "Zeyneb";
    people[1].number = "3333";

    for (int i=0; i<3; i++){

        if(strcmp(people[i].name,name)==0){

            printf("Found %s\n", people[i].number);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}
