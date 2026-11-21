#include <stdio.h>
#include <stdlib.h>

struct Boiler
{
	char company[20];
	char color[20];
	int power;
	int capacity;
	int temp;
};

void show(struct Boiler *myBoiler)
{
	printf("My boiler's compane: %s\n", myBoiler->company);
	printf("My boiler's color: %s\n", myBoiler->color);
	printf("My boiler's power: %d Watts\n", myBoiler->power);
	printf("My boiler's capacity liters: %d\n", myBoiler->capacity);
	printf("My boiler's temp: %d\n", myBoiler->temp);
	printf("\n");
}

void init(struct Boiler* myBoiler)
{
	printf("Enter boiler's company: ");
	scanf_s("%19s", &myBoiler->company, sizeof(myBoiler->company));
	printf("Enter boiler's color: ");
	scanf_s("%19s", &myBoiler->color, sizeof(myBoiler->color));
	printf("Enter boiler's power: ");
	scanf_s("%d", &myBoiler->power);
	printf("Enter boiler's capacity in liters: ");
	scanf_s("%d", &myBoiler->capacity);
	printf("Enter boiler's temp: ");
	scanf_s("%d", &myBoiler->temp);
	printf("\n");
}

int main()
{
	struct Boiler myBoiler = { "SpaceX", "Black", 400, 4, 100 };
	show(&myBoiler);
	init(&myBoiler);
	show(&myBoiler);

	return 0;
}