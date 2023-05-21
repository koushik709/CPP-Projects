#include<stdio.h>

int powr(int base, int power);

int main(){
    int base,power;
    printf("Enter the Base number: ");
    scanf("%d",&base);
    printf("Enter the power number: ");
    scanf("%d",&power);

    int pwer = powr(base,power);

    printf("Base: %d power: %d total = %d\n",base,power,pwer);

    return 0;
}

int powr(int base, int power){
    if(power==0)
        return 1;
    else
        return base*powr(base,power-1);
}