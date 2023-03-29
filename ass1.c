#include<stdio.h>
int main(){
    int n,fd,ld;
    scanf("%d",&n);
    fd=n/1000;
    ld=n%10;
    int sum =fd+ld;
    printf("%d",sum);
}