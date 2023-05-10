#include<stdio.h>

main()
{
	char s1[100];
	char s2[100];
	
	printf("Enter string=>");
	gets(s1);
	strcpy(s2,s1);
	strrev(s2);
	
	if(strcmp(s1,s2)==0)
	{
		printf("string is palindrom");
	}
	else
	{
		printf("string is not palindrom");
	}
}
