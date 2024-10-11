#include <stdio.h>
#include <cs50.h>

/*
int main(void){

    const int N=3;
    int scores[N];
    for (int i=0; i<3; i++){
        scores[i]= get_int("Score: ");
    }


    printf("Avarage: %f\n", (scores[0]+scores[1]+scores[2])/(float)N);
}*/

const int N=3;
float average(int length, int array[]);
int main(void){
    int scores[N];
    for(int i=0; i<N; i++){
        scores[i]=get_int("Scores: ");
    }
    printf("Average %f\n", average(N, scores));
}

float average(int length, int array[]){
    int sum=0;
    for (int i=0; i<length; i++){
        sum+=array[i];
    }
    return (sum/ (float) length);
}
