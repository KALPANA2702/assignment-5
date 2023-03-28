//wap to print first N even natural number
int main()
{
    int i,n,c;
    printf("enter the no. of natural number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        c=2*i;
        printf("\n%d",c);
    }
    return 0;
}