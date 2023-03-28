//wap to print first N odd natural number
int main()
{
    int i,n,c;
    printf("enter the no. of natural number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        c=2*i-1;
        printf("\n%d",c);
    }
    return 0;
}