#include <cs50.h>
#include <stdio.h>
/*
int add(int a, int b);
int main(void){ //main neden burada int returnlüyor we wwill turn back to this but i always returns a int
     int x= get_int("x: ");
     int y= get_int("y: ");

     //int z= add(x,y);
     //printf("%i\n", z);
     printf("%i\n", add(x,y));
}
int add(int a, int b){
    return a+b;
}
*/
int main(void){
    int x=get_int("x:  ");
    int y=get_int("y:  ");

    float z= (float)x / (float)y;

    printf("%.5f\n", z);
}
