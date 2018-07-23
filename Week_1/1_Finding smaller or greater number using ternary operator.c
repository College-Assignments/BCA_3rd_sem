#include<stdio.h>

int a,b,big;

int main(){
    system("cls");
    printf("Enter first number : ");
    scanf("%d", &a);
    printf("\nEnter second number : ");
    scanf("%d", &b);
    big = (a>b)?a:b;
    printf("\n\t>>>> %d Is greater number\n", big);
}