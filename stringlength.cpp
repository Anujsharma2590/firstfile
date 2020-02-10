#include <stdio.h> 
#include<string.h>
int main() {
	char c[100];
	
	printf("Enter the String: "); 
    scanf("%s", c);
	
		int i=0;
		while(c[i]!= '\0')
		{
			i=i+1;
		}
		printf("length of the string is %d", i);
	return 0;
}
