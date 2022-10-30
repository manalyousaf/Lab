#include<stdio.h>
int main()
{
	int input,seat;
	//taking array to save previous data
	int array[100] = { 0 };
	//using do while till sentinel value is entered
	do 
	{
		//prompting menu
		 printf("\nType 1 for 'First Class'\n");
		 printf("Type 2 for 'Economy Class'\n");
		 printf("Type 3 for exit\n");
		 do
		 {
		 scanf_s("%d", &input); 
		 if (input < 1 || input > 3)
		 {
			 printf("Wrong input!\nPlease Enter correct input : \n");
		 }
		 } while (input < 1 || input > 3);
		 //switch for 3 cases
		switch (input)
		{
		case 1:
			//displaying chart
			printf("Seating chart of First class is : \n");
			for (int i = 0; i < 30; i++)
			{
				printf("%d ", array[i]);
			}
			printf("\nSelect seat number (1-30):\n");
			do //input validation
			{
				scanf_s("%d", &seat);
				if (seat > 30 || seat < 1) //if input is wrong
				{
					printf("You entered wrong input!\n");
				}
				if (seat < 31 && seat > 0)
				{
					if (array[seat - 1] == 1) //if seat is already booked	
					{
						printf("Already booked please select any other\n");
					}
				}
			} while (seat > 30 || seat < 1 || array[seat - 1] == 1);
			array[seat - 1] = 1;
			printf("Seating chart is \n");
			for (int i = 0; i < 30; i++)
			{
				printf("%d ", array[i]);
			}
			printf(" \nboarding pass: \n your seat number is : FC%d\n its in the first class \n thank you", seat);
			break;
		case 2:
			//displaying chart
			printf("\nSeating chart of economy class is:\n");
			for (int i = 30; i < 100; i++)
			{
				printf("%d ", array[i]);
			}
			printf("\nSelect seat number (31-100):");
			do //input validation
			{
				scanf_s("%d", &seat);
				if (seat > 100 || seat < 31) //if input is wrong
				{
					printf("You entered wrong input!\n");
				}
				if (seat < 101 && seat > 30)
				{
					if (array[seat - 1] == 1) //if seat is already booked	
					{
						printf("Already booked please select any other\n");
					}
				}
			} while (seat > 100 || seat < 31 || array[seat - 1] == 1);
			array[seat - 1] = 1;
			//modified chart
			printf("Seating chart of economy class is \n");
			for (int i = 30; i < 100; i++)
			{
				printf("%d ", array[i]);
			}
			printf(" \nboarding pass: \n your seat number is : EC%d\n its in the economy class \n thank you", seat);
			break;
			//if sentinel value is entered
		case 3:
			printf("exit!");
			break;
		}
	}
	while (input!=3 );
	
}
