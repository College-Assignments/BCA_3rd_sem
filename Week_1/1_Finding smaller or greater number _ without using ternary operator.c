#include<stdio.h>

int a,b;

int main(){
    system("cls");
    printf("Enter first number : ");
    scanf("%d", &a);
    printf("\nEnter second number : ");
    scanf("%d", &b);
    if(a>b){
        printf("\n\t%d is greater than %d\n", a,b );
    }else{
        printf("\n\t>>>> %d is greater than %d\n", b,a);
    }
    return 0;
}