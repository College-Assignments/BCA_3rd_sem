// To compile using gcc you have to use -lm during compiling to link math.h correctly
// example "gcc -o filename filename.c -lm"

#include <stdio.h>
#include <math.h>

int x;

void btod(){
	int binary_number, decimal_number = 0, count;
	printf("\nEnter A Binary Value: \t");
	scanf("%d", &binary_number);
	for(count = 0; binary_number > 0; count++){
	    decimal_number = decimal_number + pow(2, count) * (binary_number % 10);
	    binary_number = binary_number / 10;
	}
	printf("\nDecimal Equivalent of Binary Number: %d\n", decimal_number);
}
void btoo(){
	long long binaryNumber,initBinaryNumber;
    printf("Enter a binary number: ");
    scanf("%lld", &binaryNumber);
    initBinaryNumber=binaryNumber;
    int octalNumber = 0, decimalNumber = 0, i = 0;
    while(binaryNumber != 0){
        decimalNumber += (binaryNumber%10) * pow(2,i);
        ++i;
        binaryNumber/=10;
    }
    i = 1;
    while (decimalNumber != 0){
        octalNumber += (decimalNumber % 8) * i;
        decimalNumber /= 8;
        i *= 10;
    }
    printf("%lld in binary = %lld in octal", initBinaryNumber, octalNumber);
}
void btoh(){
	long int binaryval, hexadecimalval = 0, i = 1, remainder;
    printf("Enter the binary number: ");
    scanf("%ld", &binaryval);
    while (binaryval != 0){
        remainder = binaryval % 10;
        hexadecimalval = hexadecimalval + remainder * i;
        i = i * 2;
        binaryval = binaryval / 10;
    }
    printf("Equivalent hexadecimal value is : %lX", hexadecimalval);
}

int main(){
	start:
	printf("\n\n1. Binary to Decimal Conversion\n2. Binary to Octal Conversion\n3. Binary to Hexadecimal Conversion\n4. Exit\n\nEnter your choise : ");
	scanf("%d", &x);
	switch(x){
		case 1: btod();
				break;
		case 2: btoo();
				break;
		case 3: btoh();
				break;
		case 4: return 0;
		default: printf("Wrong option zzz.. Please try again!\n");
				goto start;
	}
	goto start;
	return 0;
}