//You will be given a number 'N'. Your task is to calculate the sum of first N natural numbers(1 to N)
//Example
//input: 
//4
//output: 
//10

#include<stdio.h>

int main()
{
    int N,i,sum=0;
    printf("Enter the value for N\n");
    scanf("%d", &N);
    for (i=0;i<=N;i++)
    {
      sum=sum+i;
    }
    printf(" sum is %d",sum);

    //Write your code here
       
       
       
       
       
    return 0;
}
