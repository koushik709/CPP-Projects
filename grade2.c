#include<stdio.h>
//Formula o1
int main(){
    char grade;
    printf("Enter your grade; ");
    scanf("%c",&grade);
    printf("\n");
    switch (grade)
    {
    case 'a':
    case 'A':
        printf("Excelent");
        break;
    case 'b':
    case 'B':
        printf("Excelent1");
        break;
    case 'c':
    case 'C':
        printf("Excelent2");
        break;
    case 'd':
    case 'D':
        printf("Excelent3");
        break;
    
    default:
        printf("what is this");
        break;
    }

    return 0;
}