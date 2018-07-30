// To compile using gcc you have to use -lm during compiling to link math.h correctly
// example "gcc -o filename filename.c -lm"

#include<stdio.h>
#include<math.h>

int x;

void series_1(){
	int i,N,sum;
    printf("Enter the Nth value: ");
    scanf("%d",&N);
    sum=0;
    for(i=1;i<=N;i++){
        sum= sum+ i;
    }
    printf("\nSum of the series is: %d\n",sum);
};

void series_2(){
	int evens=0,odds=0,n,i;
	printf("Enter the Nth value : ");
	scanf("%d", &n);
	for(i=1;i<=n;i++){
		if(i%2==0){
			evens+=i;
		}else{
			odds+=i;
		}
	}
	printf("The sum is : %d\n", odds-evens);
};

void series_3(){
	int a, d, n, i, tn,sum = 0;
 
     printf("Enter the first term value of the A.P. series: ");
     scanf("%d", &a);
     printf("Enter the total numbers in the A.P. series: ");
     scanf("%d", &n);
     printf("Enter the common difference of the A.P. series: ");
     scanf("%d", &d);
     sum = (n * (2 * a + (n - 1)* d ))/ 2;
     tn = a + (n - 1) * d;
     printf("Sum of the A.P series is: ");
     for (i = a; i <= tn; i = i + d ){
          if (i != tn){
               printf("%d + ", i);
          }else{
               printf("%d = %d ", i, sum);
          }
     }
};

void series_4(){
	float a, r, i, last_term, sum = 0;
    int n;
 
    printf("Enter the first term of the G.P. series: ");
    scanf("%f", &a);
    printf("Enter the total numbers in the G.P. series: ");
    scanf("%d", &n);
    printf("Enter the common ratio of the G.P. series: ");
    scanf("%f", &r);
    sum = (a *(1 - pow(r, n + 1))) / (1 - r);
    last_term = a * pow(r, n - 1);
    printf("\nLast term term of theG.P.: %f", last_term);
    printf("\nSum of the G.P.: %f\n", sum);
};

void series_5(){
	int n,i; 
	long sum=0;
	long int t=1;
	printf("Input the number of terms : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	 printf("%ld  ",t);
	  if (i<n){
	      printf("+ ");
	  }
	 sum=sum+t;
	 t=(t*10)+1;
  }
  printf("\nThe Sum is : %ld\n",sum);
};

void series_6(){

};

void series_7(){
	int c, n,fact=1;
	printf("Enter a number to calculate its factorial : ");
	scanf("%d", &n);
	for (c = 1; c <= n; c++)
	fact = fact * c;
	printf("Factorial of %d is %d", n, fact);
};

void series_8(){
	int f,n,i=0,j=0;

};

void series_9(){
};

int main(void){
	startAgain:
	printf("\n\n\n\t1. 1+2+3+4+....+n\n\t2. 1-2+3-4.....up to nth number\n\t3. A.P series\n\t4. G.P Series\n\t5. 1+11+111+1111+.....up to nth number\n\t6. 1+12+123+1234+....up to nth number\n\t7. n!\n\t8. ((1/2!)^n)+((2/3!)^n+(3/4!)^n+... up to nth number\n\t9. (1^n/n)-(2n/n!)+(3n/n!)+...... up to nth number\n\t10. Exit\n\n");
	printf("\tEnter your choice to continue : ");
	scanf("%d", &x);
	printf("\n\n");
	switch(x){
		case 10: return 0;
		case 1: series_1();
				break;
		case 2: series_2();
				break;
		case 3: series_3();
				break;
		case 4: series_4();
				break;
		case 5: series_5();
				break;
		case 6: series_6();
				break;
		case 7: series_7();
				break;
		case 8: series_8();
				break;
		case 9: series_9();
				break;
		default:printf("Wrong option! Try again :/");
				break;
	}
	goto startAgain;
	return 0;
}
