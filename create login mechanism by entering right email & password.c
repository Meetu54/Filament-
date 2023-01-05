#include <stdio.h>
#include<string.h> 
main(){
	char a[1000];
	char b[1000];
	
	int m;
	int i;
	
	char c[1000];
	char k[1000];
	
	printf("Enter your email:\n");
	scanf("%s",&a);
	
	printf("Enter your password:\n");
	scanf("%s",&b);
	
	m=strcmp(a,b);
	if(m==0){
		if(i==0){
			printf("\n login successfully!");
		}
		else{
			printf("\n wrong password");
		}
		
		
	}
	else{
		printf("\n user credentials is invalid");
	}
}
