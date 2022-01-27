// this code will help you to understand the use of fputs and fgets function in file 
//handling
#include<stdio.h>
#include<stdlib.h>
int main(){
	int charac=0,words=0;
	char arr3[60];
	FILE *fptr=fopen("fileash4.txt","w");
	if(fptr==NULL){
		printf("fiel does not crated \n");
		exit(1);
	}
	else
	printf("file has been created\n\n");
	fputs("hai this is ashok yadav",fptr);
	fputs("\nhe is working for jk technosot\n",fptr);
	fclose(fptr);
	
	
	//here when we read using charactor by charactor we read all data form fiel 
	//but using fgets function only data in one line we can read 
	fptr=fopen("fileash4.txt","r");
	
	do{
		char c=fgetc(fptr);
		//cheking for end of file 
		if(feof(fptr))
		break;
		
		printf("%c",c);
		charac++;
		if(c==' '|| c=='\t' || c=='\n'|| c=='\0')
		words++;
		
	}while(1);
	
	printf("\n\nnumber of chartor is %d\n",charac);
	printf("number of words is %d\n",words);
	fclose(fptr);
}
