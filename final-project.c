#include<stdio.h>
#include<conio.h>
#include<string.h>
void mainMenu(void);
void starters(void);
void bbq(void);
void meatDishes(void);
void seaFood(void);
void desserts(void);
void beverages(void);
void bill(void);
void filing(void);

char dish_name[100][100];
int quantity[100];
int totalPrice[100];
int i=0;

struct Person {
  char name[50];
  int billing;
  int review;
} person1;

void main(void)

{
	printf("\t\t\tWelcome to the Naviwala's Restaurant\n\n");
	printf("Enter Your Name: ");
	gets(person1.name);
	mainMenu();
	bill();
	printf("\n\nEnter your review: ");
	scanf("%d", &person1.review);
	filing();
	getch();
}

void mainMenu(void)
{
	char arr[7][100]={"","Starters", "B.B.Q", "Meat Dishes", "Sea Food", "Desserts", "Beverages"};
	int j, choice;
	printf("=============== Main Menu ==============\n\n");
	for(j=1; j<=6; j++){
		printf("%d) %s\n",j,arr[j]);
	}
	printf("\nEnter the number to select the Menu or 0 to cancel the order: ");
	scanf("%d", &choice);
	printf("\n");
	switch(choice){
		case 0:
			printf("Thanks for coming %s!!", person1.name);
			break;
		case 1:
			starters();
			break;
		case 2:
			bbq();
			break;
		case 3:
			meatDishes();
			break;
		case 4:
			seaFood();
			break;
		case 5:		 
			desserts();
			break;
		case 6:
			beverages();
			break;
		default:
			printf("Invalid Choice");
	}
}

void starters(void)
{
	char arr[5]={'a', 'b', 'c', 'd', 'e'}, dishName[100][100] = {"","Hot & Sour Soup", "Chicken Corn Soup", "Chicken Wing & Hot Sauce", "Green Salad", "Raita"};
	char dish[100];
	int arr1[100], arr2[100], sprice[100] = {0,225, 200, 500, 150, 50};
	int choice=1,j,k;
	printf("=============== STARTERS ==============\n\n");
	printf("%c) Hot & Sour Soup ------------- 225/=\n",arr[0]);
	printf("%c) Chicken Corn Soup ----------- 200/=\n",arr[1]);
	printf("%c) Chicken Wing & Hot Sauce ---- 500/=\n",arr[2]);
	printf("%c) Green Salad ----------------- 150/=\n",arr[3]);
	printf("%c) Raita ----------------------- 50/=\n",arr[4]);
	printf("\n\nIf you want to select the menu enter any number or press 0 to go back: ");
	scanf("%d", &j);
	if(j==0)
	{
		mainMenu();
	}
	else
	{
		while(choice != 0)
		{
			printf("\nEnter the number of dish or if you want to go back enter 0: ");
			scanf("%d", &choice);
			if(choice == 0)
			{
				starters();
			}
			else
			{
				strcpy(dish_name[i], dishName[choice]);
				printf("\nEnter quantity: ");
				scanf("%d", &quantity[i]);
				totalPrice[i] = quantity[i] * sprice[choice];
				i++;
			}
		}
	}
}

void bbq(void)
{
	char arr[5]={'a', 'b', 'c', 'd', 'e'}, dishName[100][100] = {"","Chicken Tikka", "Chicken Boti", "Mutton Boti", "Seekh Kabab", "Chicken Reshmi Kabab"};
	char dish[100];
	int arr1[100], arr2[100], sprice[100] = {0,250, 550, 950, 500, 500};
	int choice=1,j,k;
	printf("================ B.B.Q ===============\n\n");
	printf("%c) Chicken Tikka --------------- 250/=\n",arr[0]);
	printf("%c) Chicken Boti ---------------- 550/=\n",arr[1]);
	printf("%c) Mutton Boti ----------------- 950/=\n",arr[2]);
	printf("%c) Seekh Kabab ------------------ 500/=\n",arr[3]);
	printf("%c) Chicken Reshmi Kabab -------- 500/=\n",arr[4]);
	printf("\n\nIf you want to select the menu enter any number or press 0 to go back: ");
	scanf("%d", &j);
	if(j==0)
	{
		mainMenu();
	}
	else
	{
		while(choice != 0)
		{
			printf("\nEnter the number of dish or if you want to go back enter 0: ");
			scanf("%d", &choice);
			if(choice == 0)
			{
				bbq();
			}
			else
			{
				strcpy(dish_name[i], dishName[choice]);
				printf("\nEnter quantity: ");
				scanf("%d", &quantity[i]);
				totalPrice[i] = quantity[i] * sprice[choice];
				i++;
			}
		}
	}
}

void meatDishes(void)
{
	char arr[5]={'a', 'b', 'c', 'd', 'e'}, dishName[100][100] = {"","Biryani", "Paye", "Nihari", "Haleem", "Pilao"};
	char dish[100];
	int arr1[100], arr2[100], sprice[100] = {0,200, 350, 250, 150, 300};
	int choice=1,j,k;
	printf("============= MEAT DISHES ============\n\n");
	printf("%c) Biryani --------------------- 200/=\n",arr[0]);
	printf("%c) Paye ------------------------ 350/=\n",arr[1]);
	printf("%c) Nihari ---------------------- 250/=\n",arr[2]);
	printf("%c) Haleem ---------------------- 150/=\n",arr[3]);
	printf("%c) Pilao ------------------------ 300/=\n",arr[4]);
	printf("\n\nIf you want to select the menu enter any number or press 0 to go back: ");
	scanf("%d", &j);
	if(j==0)
	{
		mainMenu();
	}
	else
	{
		while(choice != 0)
		{
			printf("\nEnter the number of dish or if you want to go back enter 0: ");
			scanf("%d", &choice);
			if(choice == 0)
			{
				meatDishes();
			}
			else
			{
				strcpy(dish_name[i], dishName[choice]);
				printf("\nEnter quantity: ");
				scanf("%d", &quantity[i]);
				totalPrice[i] = quantity[i] * sprice[choice];
				i++;
			}
		}
	}
}

void seaFood(void)
{
	char arr[5]={'a', 'b', 'c', 'd', 'e'}, dishName[100][100] = {"","Fried Fish", "Fried Prawns", "Finger Fish", "Grilled Jumbo Prawns", "Fish Tikka"};
	char dish[100];
	int arr1[100], arr2[100], sprice[100] = {0,850, 1100, 650, 1550, 900};
	int choice=1,j,k;
	printf("=============== SEA FOOD ==============\n\n");
	printf("%c) Fried Fish ------------------ 850/=\n",arr[0]);
	printf("%c) Fried Prawns ---------------- 1100/=\n",arr[1]);
	printf("%c) Finger Fish ----------------- 650/=\n",arr[2]);
	printf("%c) Grilled Jumbo Prawns -------- 1550/=\n",arr[3]);
	printf("%c) Fish Tikka ------------------ 900/=\n",arr[4]);
	printf("\n\nIf you want to select the menu enter any number or press 0 to go back: ");
	scanf("%d", &j);
	if(j==0)
	{
		mainMenu();
	}
	else
	{
		while(choice != 0)
		{
			printf("\nEnter the number of dish or if you want to go back enter 0: ");
			scanf("%d", &choice);
			if(choice == 0)
			{
				seaFood();
			}
			else
			{
				strcpy(dish_name[i], dishName[choice]);
				printf("\nEnter quantity: ");
				scanf("%d", &quantity[i]);
				totalPrice[i] = quantity[i] * sprice[choice];
				i++;
			}
		}
	}
}

void desserts(void)
{
	char arr[5]={'a', 'b', 'c', 'd', 'e'}, dishName[100][100] = {"","Kulfi", "Kheer", "Suji Halwa", "Ice-Cream", "Fruit Trifle"};
	char dish[100];
	int arr1[100], arr2[100], sprice[100] = {0,200, 950, 225, 100, 500};
	int choice=1,j,k;
	printf("============== DESSERTS =============\n\n");
	printf("%c) Kulfi ----------------------- 200/=\n",arr[0]);
	printf("%c) Kheer ----------------------- 950/=\n",arr[1]);
	printf("%c) Suji Halwa ------------------ 225/=\n",arr[2]);
	printf("%c) Ice-cream ------------------- 100/=\n",arr[3]);
	printf("%c) Fruit-Trifle ---------------- 500/=\n",arr[4]);
	printf("\n\nIf you want to select the menu enter any number or press 0 to go back: ");
	scanf("%d", &j);
	if(j==0)
	{
		mainMenu();
	}
	else
	{
		while(choice != 0)
		{
			printf("\nEnter the number of dish or if you want to go back enter 0: ");
			scanf("%d", &choice);
			if(choice == 0)
			{
				desserts();
			}
			else
			{
				strcpy(dish_name[i], dishName[choice]);
				printf("\nEnter quantity: ");
				scanf("%d", &quantity[i]);
				totalPrice[i] = quantity[i] * sprice[choice];
				i++;
			}
		}
	}
}

void beverages(void)
{
	char arr[5]={'a', 'b', 'c', 'd', 'e'}, dishName[100][100] = {"","Cold Drink", "Fresh Lime", "Lassi", "Tea", "Green-Tea"};
	char dish[100];
	int arr1[100], arr2[100], sprice[100] = {0,100, 200, 150, 100, 150};
	int choice=1,j,k;
	printf("============= BEVERAGES ============\n\n");
	printf("%c) Cold Drink ------------------ 100/=\n",arr[0]);
	printf("%c) Fresh Lime ------------------ 200/=\n",arr[1]);
	printf("%c) Lassi ----------------------- 150/=\n",arr[2]);
	printf("%c) Tea ------------------------- 100/=\n",arr[3]);
	printf("%c) Green-Tea ------------------- 150/=\n",arr[4]);
	printf("\n\nIf you want to select the menu enter any number or press 0 to go back: ");
	scanf("%d", &j);
	if(j==0)
	{
		mainMenu();
	}
	else
	{
		while(choice != 0)
		{
			printf("\nEnter the number of dish or if you want to go back enter 0: ");
			scanf("%d", &choice);
			if(choice == 0)
			{
				beverages();
			}
			else
			{
				strcpy(dish_name[i], dishName[choice]);
				printf("\nEnter quantity: ");
				scanf("%d", &quantity[i]);
				totalPrice[i] = quantity[i] * sprice[choice];
				i++;
			}
		}
	}
}

void bill(void)
{
	printf("\n");
	int j;
	for(j=0; j<i; j++)
	{
		printf("%s: %d = %d\n", dish_name[j], quantity[j], totalPrice[j]);
	}
	for(j=0; j<i; j++)
	{
		person1.billing += totalPrice[j];
	}
	printf("\nTotal Bill: %d", person1.billing);
}

void filing(void)
{ 
	FILE *fptr; 
	fptr=fopen("D:\\program.txt","a");
	fprintf(fptr,"\nPerson:\nName: %s\nTotal Bill: %d\nReview: %d Stars\n", person1.name, person1.billing, person1.review);
	fclose(fptr);
}

