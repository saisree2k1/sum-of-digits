#include <stdio.h>
int fun(int n)
{
    while(n>0)
    {
        return(n%10 + fun(n/10));   
    }
    
}
int main()
{
    int n;
    scanf("%d",&n);
    int result=fun(n);
    printf("%d",result);
}
