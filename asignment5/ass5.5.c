//wap to print first N 0dd natural number in reverse
int main()
{
    int i,n,c;
    printf("enter the no. of natural number");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        c=2*i-1;
        printf("\n%d",c);
    }
    return 0;
}