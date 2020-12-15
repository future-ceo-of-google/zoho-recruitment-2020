#include <stdio.h>

int main()
{
    int n,i,j;
    printf("Enter the size of the pattern:");
    scanf("%d",&n);      
    for(i=0;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            printf(" ");  
        }
        for(j=i;j>0;j--)
        {
            printf("%d",j);
        }
        for(j=0;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }

     return 0;
}
