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
	int n;
	printf("Enter the Nth value : ");
	scanf("%d", &n);
	int sum = 0;
    for (int i = 1 ; i <= n ; i++){
        for (int j = 1 ; j <= i ; j++){
            sum += j;
        }
    }
    printf("Sum of the series is : %d", sum);
};

void series_4(){
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

void series_5(){
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

void series_6(){
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

void series_7(){
	int i,n;
    long int s=0,t=0;
    printf("\n Enter the value upto digits: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
            s=s*10+i;
            t=t+s;
            printf(" %li",s);
            if(i<n)
                printf(" +");
            else
                printf(" = ");
        }
    printf("%li",t);
};

void series_8(){};

void series_9(){};

void series_10(){
	int c, n,fact=1;
	printf("Enter a number to calculate its factorial : ");
	scanf("%d", &n);
	for (c = 1; c <= n; c++)
	fact = fact * c;
	printf("Factorial of %d is %d", n, fact);
};

void series_11(){

};

void series_12(){
};

int main(void){
	startAgain:
	printf("\n\n\n\t1. 1+2+3+4+....+n\n\t2. 1-2+3-4.....up to nth number\n\t3. 1+(1+2)+(1+2+3)+(1+2+3+4)....up to nth number\n\t4. A.P series\n\t5. G.P Series\n\t6. 1+11+111+1111+.....up to nth number\n\t7. 1+12+123+1234+....up to nth number\n\t8. 0.1+0.11+0.111+0.1111.... up to nth number\n\t9. 0.1+0.12+0.123+0.1234.... up to nth number\n\t10. n!\n\t11. ((1/2!)^n)+((2/3!)^n+(3/4!)^n+... up to nth number\n\t12. (1^n/n)-(2n/n!)+(3n/n!)+...... up to nth number\n\t0. Exit\n\n");
	printf("\tEnter your choice to continue : ");
	scanf("%d", &x);
	printf("\n\n");
	switch(x){
		case 0: return 0;
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
		case 10: series_10();
				break;
		case 11: series_11();
				break;
		case 12: series_12();
				break;
		default:printf("Wrong option! Try again :/");
				break;
	}
	goto startAgain;
	return 0;
}