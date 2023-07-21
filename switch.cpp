#include<stdio.h>
int main()
{
	int day;
	printf("enter the day : ");
	scanf("%c",&day);
	switch(day)
	{
		case '1' :
			printf("1-sunday");
			break;
		case '2' :
		    printf("2-monday");
			break ;
		case '3' :
			printf("3-tuesday");
			break ;
		case '4' :
		    printf("4-wednesday");
			break ;
		case '5' :
		    printf("5-thursday");
			break ;
		case '6':
		    printf("6-friday");
			break;
		case '7' :
		    printf("7-saturday");
			break;
		default :
		    printf("there is no output based on the input");					
	}
	return 0;
}
