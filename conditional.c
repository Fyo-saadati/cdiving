# include <stdio.h>
int main()
{	
	int number;
	printf("Enter your number: \n");
	scanf("%i", &number);
	if ((number >=10 ) && (number < 100)) 
		printf("%i is double digit", number);
	if (number <10) 
		printf("%i is one digit\n", number);
	return 0;
}
