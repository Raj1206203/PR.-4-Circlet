#include<stdio.h>

int main()
{
    int i,j,num=11;
    
    for(i=0;i<=3;i++)
    {
        for(j=1;j<=i+1;j++)
        {
            printf("%d  ",num);
            num++;
        }
        printf("\n");
    }
    return 0;
}
