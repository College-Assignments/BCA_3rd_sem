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
    big=0;
    if (a>b) {
        if(a>c){
            big=a;
        }else{
            big=c;
        }
    }else{
        if(b>c){
            big=b;
        }else{
            big=c;
        }
    }
    if (a<b) {
        if(a<c){
            small=a;
        }else{
            small=c;
        }
    }else{
        if(b<c){
            small=b;
        }else{
            small=c;
        }
    }
    printf("\n\t>>> %d here is the greater number");
    return 0;
}