#include <stdio.h>
#include <string.h>

struct str{
    int roll;
    char name[15];
    float mark;
};//also you can declare variable here(e.g. e)

int main() {
    struct str e;
    printf("Enter the roll ");
    scanf("%d",&e.roll);
    printf("Enter the Name ");
    scanf("%s",&e.name);
    printf("Enter the mark ");
    scanf("%f",&e.mark);

    printf("\n\n Total Information\n");

    printf("roll: %d\n",e.roll);
    printf("Enter the Name ");
    printf("Name: %s\n",e.name);
    printf("Enter the mark ");
    printf("Mark: %f\n",e.mark);

    return 0;
}