#include<stdio.h>

main()
{
	char Email[100]="smitbuha@gmail.com";
	char Password[100]="smitbuha25";
	char Email1[100];
	char Password1[100];

	printf("Enter the Email=>");
	gets(Email);

	printf("Enter the password=>");
	gets(Password);
	
	printf("\n*******************\n");

	if(strcmp(Email,Email1)==0) 
	{
		if(strcmp(Password,Password1) == 0)
		{
		
			printf("User successfully logged in...");
		}
		else
		{

			printf("check your Password...");
		}
	}
	else
	{
	
		printf("check your Email...");
	}
	getch();
}
