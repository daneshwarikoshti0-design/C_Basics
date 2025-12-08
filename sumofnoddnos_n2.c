//The sum of the first n odd numbers is always equal to n^2. Write a C program to verify this fact using a "for" loop.

#include<stdio.h>
void main()
{
    int n,sum=0;
    scanf("%d",&n);
    for(int i=0;i<2*n;i++){
        if(i%2!=0)
            sum=sum+i;
    }
    printf("sum=%d\n",sum);
    if(sum==n*n)
        printf("sum of first n odd numbers is equal to n^2 is verified\n");
    else
        printf("Not verified\n");
}
