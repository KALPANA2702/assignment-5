//wap to print cube first N  natural number 
int main()
{
    int i,n,c;
    printf("enter the no. of natural number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        c=i*i*i;
        printf("\n%d",c);
    }
    return 0;
}