#include<stdio.h>
#include<stdlib.h>
int main(){
int a,b,c;
printf("enter the value of a,b,c :");
scanf("%d %d %d",&a,&b,&c);
if(a<b&&a<c){
    printf("%d is the smallest number ",a);
}
else if(b<c){
    printf("%d is the smallest number ",b);
}
else
{
    printf("%d is the smallest number ",c);
}
return 0;
}
