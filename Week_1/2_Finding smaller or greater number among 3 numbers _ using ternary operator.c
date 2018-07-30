#include<stdio.h>

int a,b,c,big,small;

int main(){
    system("cls");
    printf("Enter first number : ");
    scanf("%d", &a);
    printf("\nEnter second number : ");
    scanf("%d", &b);
    printf("\nEnter third number : ");
    scanf("%d", &c);
    big = (a>b)?((a>c)?a:c):((b>c)?b:c);
    small = (a<b)?((a<c)?a:c):((b<c)?b:c);
    printf("%d is the greater number", big);
    printf("%d is the smaller number", small);
    return 0;
}