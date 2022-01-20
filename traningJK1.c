#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("enter the value of a,b,c :\n ");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b&&a>c)
    {
        if(b>c){
            printf("%d is the second greatest number : \n",b);
        }
        else
            printf("%d is the second greatest number \n",c);
    }
    else if(b>a&&b>c)
    {
        if(a>c){
            printf("%d is the second greatest number : \n",a);
        }
        else
            printf("%d is the second greatest number \n",c);
    }
    else if(c>a&&c>b)
    {
       if(b>a){
            printf("%d is the second greatest number : \n",b);
        }
        else
            printf("%d is the second greatest number \n",a);
    }
    return 0;
}
