//wap to print first N natural number in reverse
int main()
{
    int i,n;
    printf("enter the no. of natural number");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        printf("\n%d",i);
    }
    return 0;
}