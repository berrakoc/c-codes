#include <stdio.h>
#include <cs50.h>

int main(void){
    //int n=50;
    //int *p= &n;
    //printf("%i\n",n);
    //printf("%p\n",&n); //shows the address of n
    //printf("%p\n", p); //0x7ffd1cf6d4
    //printf("%i\n", *p); //50

    /*
    string s=  "HI!";
    printf("%s\n",s); //HI!
    //but if i act s as a pointer (actually it is)
    printf("%p\n",s); //0x5e097bc58004
    printf("%p\n", &s[0]);
    printf("%p\n", &s[1]);
    printf("%p\n", &s[2]);
    printf("%p\n", &s[3]);
    */

   /*
   char *s= "HI!";
   printf("%s\n",s); //stays the same
   */
  char *s= "HI!";
  printf("%c", s[0]);
  printf("%c", s[1]);
  printf("%c\n", s[2]);
}
