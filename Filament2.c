#include<string.h>
#include<stdio.h>

main(){
      
    char a[1000];
    int i;
    int z[1000];
    
    
    printf("Enter a word : ");
    scanf("%s", a);
    
    strcpy(z,a);
    strrev(z);
    
    i = strcmp(z,a);
    
    if(i == 0){	
    	printf("%s is palindrome", a);	
	}
	else{	
		printf("%s is not palindrome", a);	
	}
}
