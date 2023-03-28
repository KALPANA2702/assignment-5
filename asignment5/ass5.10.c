//wap to print table of n
#include<stdio.h>
int main()
{
    int i,n,c;
    printf("enter the number");
    scanf("%d",&c);
    printf("the table of %d is",c);
    for(i=1;i<=10;i++)
    {
          n=i*c;
          printf("\n");
        printf("%d*%d=%d",c,i,n);
    }
    return 0;
}