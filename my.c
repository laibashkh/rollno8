#include<stdio.h>
int main()
{
	int array[100] = { 0 };
	int option, class_type, seat_number;
	printf("\nChoose an option\n");
	printf("\n1.Seat availability chart\n2.Seat booking\n3.Exit\n\nEnter here: ");
	scanf_s("%d", &option);
	while (option != 3)
	{
		if (option == 1)
		{
			printf("\n\t\t\tSEAT AVAILABILITY CHART\n\t\tThere are 10 seats in a row\n\t\t0 shows Un_booked seats and 1 shows booked seats\n\n\t\t\t");
			for (int i = 0; i < 100; i++)
			{
				printf("%d ", array[i]);
				if (i == 9 || i == 19 || i == 29 || i == 39 || i == 49 || i == 59 || i == 69 || i == 79 || i == 89 || i == 99)
				{
					printf("\n");
					printf("\t\t\t");
				}
			}
		}
	}
}