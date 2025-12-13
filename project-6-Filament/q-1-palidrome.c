#include <stdio.h>

int main()
{
	char str[100], rev[200];
	int i,j, len =0;
	
	printf("enter any string\n");
	scanf("%S",str);
	
	for(i=0; str[i]!='\0' ;i++){
		len++;
	}
	
	j = len-1;
	for(i=0;i<len;i++){
		rev[i]=str[j];
		j--;
	}
	
	rev[i]='\0';
	
	int palindrome =1;
	for( i=0;i<len;i++){
		if(str[i] != rev[i])
		{
			palindrome=0;
			break;
		}
	}
	
	if(palindrome ==1){
		printf("output: the given string is a palindrome.");		
	}
	
	else{
			printf("output: the given string is  not a palindrome");
	}


	
	
	return 0;
}



