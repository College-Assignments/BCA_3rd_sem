#include<stdio.h>
 
void conversion(int num, int base){
      int remainder = num % base; 
      if(num == 0){
            return;
      }
      conversion(num / base, base);
      if(remainder < 10){
            printf("%d", remainder); 
      }else{
            printf("%c", remainder - 10 + 'A' );
      }
}
 
int main(){
      int num, choice;
      start:
      printf("\nEnter a Positive Decimal Number : ");
      scanf("%d", &num);
      while(1){
            printf("\n\n\n1. Decimal To Binary Conversion\n2. Decimal To Octal Conversion\n3. Decimal To Hexadecimal Conversion\n4. Quit\nEnter Your Option : ");
            scanf("%d", &choice);
            switch(choice){ 
                  case 1: printf("\nBinary Value : ");
                          conversion(num, 2);
                          break;
                  case 2: printf("\nOctal Value : ");
                          conversion(num, 8);
                          break;
                  case 3: printf("\nHexadecimal Value : ");
                          conversion(num, 16);
                          break;
                  case 4: printf("Exiting...\n\n");
                          break;
                  default: printf("\nEnter a correct input : ");
                           goto start;
            }
      }
      printf("\n");
      return 0;
}