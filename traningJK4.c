#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 100
int main(){
    int arr1[MAX_SIZE];
    int arr[MAX_SIZE];
    int size,search,j,del,k,insert,con,pos,m,n;
    int found=0;
    int found1=0;
    printf("Enter the size of the array : ");
    scanf("%d",&size);
    printf("please enter %d number :",size);
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("the number you entered is :\n");
     for(int i=0;i<size;i++){
       printf("%d\n",arr[i]);
    }
    printf("Enter the element which you want to search :\n");
    scanf("%d",&search);

    for(j=0;j<size;j++){

        if(search==arr[j]){
            found++;
            break;
        }
    }


    if(found==1){
        printf("%d element is at %d postion : \n",search,j+1);
    }
    else
    {
        printf("Element is not present in the list \n :");
    }
    //from here delete the element code starts



    //so let's start
    printf("Enter the elment which you want to delele\n");
    scanf("%d",&del);

    for( k=0;k<size;k++){
        if(arr[k]==del)
        {
           found1++;
           break;
        }
    }
    for(k;k<size;k++){
        arr[k]=arr[k+1];
    }

    printf("after deleting element remaining no of element'list is here: \n");
    for(int i=0;i<size-1;i++){
        printf("%d\t",arr[i]);
    }
//from here inserting an element code  is going to start

printf("\n");
//so let's start
printf("\nEnter the element which you  want to insere\n");
scanf("%d",&insert);
printf("for inserting at beginning enter 0\n");
printf("for insreting at end enter 1\n");
printf("for inserting in-between then enter 3\n");
scanf("%d",&con);
if(con==0){
    arr1[0]=insert;
    for(int i=1;i<size;i++){
        arr1[i]=arr[i-1];
    }
    printf("array after inserting element at the beginning \n :");
    for(int i=0;i<size;i++){
        printf("%d\t",arr1[i]);
    }
}
else if(con==1){
    arr[size-1]=insert;
    printf("array after the inserting the elemenet at the end \n");
    for(int i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
}
else if(con==3){
    printf("Enter the position number after which you want to insert\n");
    scanf("%d",&pos);
    for( m=0;m<size;m++){
      if(m==pos){
        break;
      }
        arr1[m]=arr[m];
    }
    arr1[pos]=insert;
    for(m;m<size;m++){
        arr1[m+1]=arr[m];
    }

    for(int i=0;i<size;i++){
        printf("%d\t",arr1[i]);
    }
}
}
