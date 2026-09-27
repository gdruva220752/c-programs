#include <stdio.h>
#include <string.h>

#define MAX 100

char food[MAX][50];
int count = 0;


void displayFood()
{
    int i;

    if (count == 0)
    {
        printf("Restaurant menu is empty!\n");
        return;
    }

    printf("\Restaurant Menu \n");

    for (i = 0; i < count; i++)
    {
        printf("%d. %s\n", i + 1, food[i]);
    }
}

void insertFood()
{
    int pos, i;
    char item[50];

    if (count >= MAX)
    {
        printf("List is full!\n");
        return;
    }

    printf("Enter position: ");
    scanf("%d", &pos);

    if (pos < 1 || pos > count + 1)
    {
        printf("Invalid position!\n");
        return;
    }

    printf("Enter food item: ");
    scanf(" %[^\n]", item);

    for (i = count; i >= pos; i--)
    {
        strcpy(food[i], food[i - 1]);
    }

    strcpy(food[pos - 1], item);
    count++;

    printf("Food item inserted successfully!\n");
}


void deleteFood()
{
    int pos, i;

    if (count == 0)
    {
        printf("List is empty!\n");
        return;
    }

    printf("Enter position to delete: ");
    scanf("%d", &pos);

    if (pos < 1 || pos > count)
    {
        printf("Invalid position!\n");
        return;
    }

    for (i = pos - 1; i < count - 1; i++)
    {
        strcpy(food[i], food[i + 1]);
    }

    count--;

    printf("Food item deleted successfully!\n");
}


void searchFood()
{
    char item[50];
    int i, found = 0;

    printf("Enter food item to search: ");
    scanf(" %[^\n]", item);

    for (i = 0; i < count; i++)
    {
        if (strcmp(food[i], item) == 0)
        {
            printf("Food item found at position %d\n", i + 1);
            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("Food item not found!\n");
    }
}

int main()
{
    int choice;

    do
    {
        printf("\n RESTAURANT MENU \n");
        printf("1. Display Food Items\n");
        printf("2. Insert Food Item\n");
        printf("3. Delete Food Item\n");
        printf("4. Search Food Item\n");
        printf("5. Exit\n");


        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {

            case 1:
                displayFood();
                break;

            case 2:
                insertFood();
                break;

            case 3:
                deleteFood();
                break;

            case 4:
                searchFood();
                break;

            case 5:
                printf("Thank you! Exiting...\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }

    } while (choice != 5);

    return 0;
}
