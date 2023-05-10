#include <stdio.h>
#include <math.h>
 
int main()
{
    int x,n;
    int result;
    
    //====================== using normal way ========================

    printf("Enter the Input Number: ");
    scanf("%d", &x);
    printf("Enter the Power Number: ");
    scanf("%d", &n);

    result = pow((double)x, n);

    printf("%d power of %d is %d",x,n,result);

    //====================== Using for loop ========================

    /*scanf("%d", &x);
    for(int i=0; i<3; i++){
        result = pow((double)x, i);
        printf("%d \t", result);
    }*/
    return 0;
}