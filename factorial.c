#include<stdio.h>

int main(){
    int N,i,fact=1;
    printf("Enter the Factorial Number: ");
    scanf("%d", &N);

    if(N<0){
        printf("Not a factorial number");
    }else{
        for(i=1;i<=N;++i){
            fact *= i;
            //printf("fact %d ", fact);
        }
        printf("The Factorial Number of %d is %d", N, fact);
    }

    return 0;
}