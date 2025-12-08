#include<stdio.h>
void main()
{
    int a,b,c,greatest;
    scanf("%d%d%d",&a,&b,&c);
    if(a>=b && a>=c)
        greatest=a;
    else if(b>=a && b>=c)
        greatest=b;
    else if(c>=a && c>=b)
        greatest=c;
    printf("%d is the greatest number\n",greatest);
}
