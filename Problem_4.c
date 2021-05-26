//Your task here is to print half pyramid of stars.

#include<stdio.h>


int main()
{
  	int n,i,j;

  	scanf("%d", &n);
    //Write your code here
    for(i=0;i<=n;i++)
     {
      for(j=1;j<=i;j++)
       {
        printf("*");
       }
      printf("\n");
     }

  	

  	return 0;
}
