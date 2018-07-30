#include<stdio.h>

int a,b,big,small;

int main(){
    system("cls");
    printf("Enter first number : ");
    scanf("%d", &a);
    printf("\nEnter second number : ");
    scanf("%d", &b);
    big = (a>b)?a:b;
    small = (a<b)?a:b;
    printf("\n\t>>>> %d is greater number\n", big);
    printf("\t>>>> %d is the smaller number\n", small);
}