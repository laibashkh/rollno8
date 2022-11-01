#include <stdio.h>
int main()
{
	int array[100] = {0};
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
				if (i % 10 == 0)
				{
					printf("\n");
				}
				printf("%d ", array[i]);
			}
		}
		if (option == 2)
		{
			printf("\n\tType 1 for first class\n\tType 2 for economy class");
			printf("\n\n\tSelect type of class: ");
			scanf_s("%d", &class_type);
			if (class_type == 1)
			{
				printf("\n\tSelect seat number (1-30): ");
				scanf_s("%d", &seat_number);
				if (seat_number > 0 && seat_number <= 30)
				{
					array[seat_number - 1] = 1;
					printf("\t\t_______________________________________________________________________________\n");
					printf("\t\t\t\t\tBoarding pass\n\t\t\t\tclass:\t\t\t\tFirst class\n\t\t\t\tSeat number: \t\t\t%d\n", seat_number);
					printf("\t\t_______________________________________________________________________________\n");
				}
				else
				{
					printf("\n\t\tThis seat is not available Enter any other number!\n");
				}
			}
			if (class_type == 2)
			{
				printf("\tSelect seat number (31-100): ");
				scanf_s("%d", &seat_number);
				if (seat_number > 30 && seat_number <= 100)
				{
					array[seat_number - 1] = 1;
					printf("\t\t_______________________________________________________________________________\n");
					printf("\t\t\t\t\tBoarding pass\n\t\t\t\tclass:\t\t\t\tEconomy class\n\t\t\t\tSeat number: \t\t\t%d\n", seat_number);
					printf("\t\t_______________________________________________________________________________\n");
				}
				else
				{
					printf("\n\t\tThis seat is not available Enter any other number!\n");
				}
			}
		}
		printf("\nChoose an option\n");
		printf("1.Seat availability chart\n2.Seat booking\n3.Exit\n\nEnter here: ");
		scanf("%d", &option);
	}
}
