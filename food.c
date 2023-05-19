#include<stdio.h>

int main()
{
	int n;
	printf("press 1 to sandwich\n");
	printf("press 2 to pizza world\n");
	printf("press 3 to burger farm\n");
	printf("enter your food =\n");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			printf("sandwich:\n");
			{
				printf("-veg.sandwich                      80/-  \n");    
				printf("-veg.grill sandwich               130/-  \n");
				printf("-paneer grilled tikkka sandwich   180/- \n");
				break;
			}
		case 2:
			printf("pizza world:\n");
			{
				printf("-4 topping pizza   110/- \n");    
				printf("-garden pizza      160/- \n");
				printf("-margarita pizza   180/- \n");
				break;
			}
		case 3:
			printf("burger:\n");
			{
				printf("-aloo tikki burger    70/-\n");    
				printf("-maharaja burger     200/-\n");
				printf("-veg.cheese burger   130/-\n");
				break;
			}
			default :
			printf("plz enter your food");		
	}
}
