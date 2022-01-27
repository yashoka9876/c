//code for deleting the file in file hendling
#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE *ptr=fopen("fileash8.txt","w");
	fputs("this is no use file:\n",ptr);
	fclose(ptr);
	if(remove("fileash8.txt")==0){
		printf("file is deleted");
	}
}
