#include<stdio.h>

main()
{
	char Email[100]="smitbuha@gmail.com";
	char Password[100]="smitbuha";
	char Email1[100];
	char PAssword1[100];
	
	printf("Enter your Email=>");
	gets(Email);
	printf("Enter your Password");
	gets(Password);
	
	if(strcmp(Email,Email1)==0)  
	{
		if(strcmp(Password,Password)==0)
		{
			printf("Successfully login.");
		}
		else
		{
			printf("Password and try agin...");
		}
    }
    else 
    {
    	printf("Email and try agin...");
	}
}
