#include <stdio.h>

int main()
{
    char n[50];
    int a;
    int p;
    int d;
    char add[50];

    char na[50];
    int ag;
    int ph;
    int da;
    char addr[50];

    printf("\tPHONE BOOK\n");
    printf("---------------------------\n");
    printf("1. Add the contact\n");

    int x;
    printf("Enter: ");
    scanf("%d", &x);

    if (x == 1)
    {
        int y;

        printf("Enter the number of contact to be added: ");
        scanf("%d", &y);

        if (y == 1)
        {
            printf("---------------------------\n");
            printf("Name: ");
            scanf("%s", &n);
            printf("Age: ");
            scanf("%d", &a);
            printf("Phone Number: ");
            scanf("%d", &p);
            printf("Date of Birth: ");
            scanf("%d", &d);
            printf("Address: ");
            scanf("%s", &add);   
            printf("---------------------------\n");
        }
        else if (y == 2)
        {
            printf("---------------------------\n");
            printf("Name: ");
            scanf("%s", &n);
            printf("Age: ");
            scanf("%d", &a);
            printf("Phone Number: ");
            scanf("%d", &p);
            printf("Date of Birth: ");
            scanf("%d", &d);
            printf("Address: ");
            scanf("%s", &add);   
            printf("---------------------------\n");

            printf("---------------------------\n");
            printf("Name: ");
            scanf("%s", &na);
            printf("Age: ");
            scanf("%d", &ag);
            printf("Phone Number: ");
            scanf("%d", &ph);
            printf("Date of Birth: ");
            scanf("%d", &da);
            printf("Address: ");
            scanf("%s", &addr);   
            printf("---------------------------\n");       
        }

        printf("Press 2 to see the entered contact\n");
        printf("Press 3 to exit the phone book\n");

        int z;
        printf("Enter\n");
        scanf("%d", &z);

        if (z == 2)
        {
            int num;
            printf("Enter the number of contact to be viewed: ");
            scanf("%d", &num);

            if (num == 1)
            {
                printf("---------------------------\n");
                printf("Name: ");
                printf("%s\n", n);
                printf("Age: ");
                printf("%d\n", a);
                printf("Phone Number: ");
                printf("%d\n", p);
                printf("Date of Birth: ");
                printf("%d\n", d);
                printf("Address: ");
                printf("%s\n", add);   
                printf("---------------------------\n");
            }
            else if (num == 2)
            {
                printf("---------------------------\n");
                printf("Name: ");
                printf("%s\n", n);
                printf("Age: ");
                printf("%d\n", a);
                printf("Phone Number: ");
                printf("%d\n", p);
                printf("Date of Birth: ");
                printf("%d\n", d);
                printf("Address: ");
                printf("%s\n", add);   
                printf("---------------------------\n");

                printf("---------------------------\n");
                printf("Name: ");
                printf("%s\n", na);
                printf("Age: ");
                printf("%d\n", ag);
                printf("Phone Number: ");
                printf("%d\n", ph);
                printf("Date of Birth: ");
                printf("%d\n", da);
                printf("Address: ");
                printf("%s\n", addr);   
                printf("---------------------------\n"); 
            }
        }
        else if (z == 3)
        {
            printf("Are you sure you want to close the phone book\n");
            printf("Press 1 for yes\n");
            printf("Press 2 for no\n");

            int ans;
            printf("Enter\n");
            printf("%d", &ans);

            if (ans == 1)
            {
                printf("The phone book has closed\n");
                printf("Have a good day!");            
            }
            else if (ans == 2)
            {
                printf("The phone book has not closed\n");
                printf("You can continue!\n");
            }
        } 
    }

    else
    {
        printf("In-Valid");
    }

    return 0;
}
