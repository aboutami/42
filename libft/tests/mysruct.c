
#include <stdio.h>
#include <string.h>

typedef struct 
{
	char name[50];
	char localization[60];
	int  price;
} car;

int	main()
{
	 car car1;

	strcpy(car1.name,"BMW");
	strcpy(car1.localization,"Morocco");
	car1.price = 40000;
	printf("Car name: %s\nCar localization: %s\nCar price: %d",car1.name, car1.localization, car1.price);
	return 0;
}
