//use cls to clear what was written !!!
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
void product();
void employee();
int order();
void delay();

struct products{
    int number_of_product;
    char name_of_p[50];
    int price;
    char raw_materials[100];
    char quantity_of_raw_materials[100];
};


 struct Employee{
     char major[50];
     char name[30];
     char surname[30];
     long long int id;
     int birth_m, birth_d, birth_y;
     long long int phone_number;
     double salary;
 };

 struct Customer {
     int item_number;
     int quantity;
     char name[30];
     char surname[30];
     long long int id;
     long long int phone_number;
 };

 struct Customer customers[100];

 struct Employee employees[100];

 struct products productss[100];

 int n,k,x; //variables for loops which will be used in the functions

int main()
{ 
    int choice_1;
    system("cls");
    system("color 3");
    printf("\n\n\t\t\tFACTORY MANAGEMENT SYSTEM");
    printf("\n\n\n\t\t\t\xB1\xB1\xB1\xB1\xB1\xB1\xB1 WELCOME TO THE MAIN MENU \xB1\xB1\xB1\xB1\xB1\xB1\xB1");
    printf("\n\n\t\t1.Product Management\n\t\t2.Employee Management\n\t\t3.Order Management\n\t\t4.Exit\n\n\t\tEnter your choice:");
    scanf("%d", &choice_1);
    while (choice_1 < 1 || choice_1>4)
    {
        printf("Wrong entrance try again : ");
        scanf("%d", &choice_1);
        system("cls");
    }
    if (choice_1 == 1)
    {
        printf("Product Management");
        delay();
        product();
    }
    else if (choice_1 == 2)
    {
        printf("Employee Management");
        delay(); 
       
        employee();
    }
    else if (choice_1 == 3)
    {
        printf("Order Management");
        delay();
        order();
    }
    else
    {
        printf("Exit");
        delay();
        exit(0);
    }






    return 0;
}

void delay()
{
    int i;
    printf("\nLOADING");
    for (i = 0; i <= 6; i++)
    {
        Sleep(100);
        printf(".");
        
    }
    system("cls");

}

void product()
{
    int p;
    int choice_2;
    int cont_2;
    int cont_2_1;
    printf("\n\n\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELCOME TO PRODUCT MANAGEMENT\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\n\t\t1.Add product\n\t\t2.Edit Warehouse\n\t\t3.Check Warehouse\n\t\t4.Exit To Menu\n\n\t\tEnter your choice:");
    scanf("%d", &choice_2);
    while (choice_2 < 1 || choice_2>4)
    {
        printf("Wrong entrance try again : ");
        scanf("%d", &choice_2);
        system("cls");
    }
    if (choice_2 == 1)
    {
        printf("Add Product");
        delay();

        printf("\nEnter how many employees you want to add :");
        scanf("%d", &k);

        //Taking each employee detail as input
        printf("\nEnter %d Product Details \n \n", k);
        for (int m = 1; m < k; m++) {
            printf("Product %d: \n", m);

            printf("Number of product: ");
            scanf("%d", &productss[m].number_of_product);

            printf("Name of product: ");
            scanf("%s", productss[m].name_of_p);


            printf("Price of item: ");
            scanf("%d", &productss[m].price);

            printf("Enter the raw materials(WARNING! x-x-x format if more than one): ");
            scanf("%s", productss[m].raw_materials);

            printf("Enter the quantity of raw materials(WARNING! x-x-x format if more than one): ");
            scanf("%s", productss[m].quantity_of_raw_materials);


        }
        printf("\nDetails taken.\n");
        delay();
        product();
    }
    if (choice_2 == 2)
    {
        printf("Edit Warehouse");
        delay();
        printf("\n-------------- All Product Details---------------\n");
        printf("\n-------------- (If not data  exist please return to main and add data)---------------\n");
        for (int m = 1; m < k; m++) {
            printf("Number of product: %d\n ", productss[m].number_of_product);

            printf("Name of product: %s\n ", productss[m].name_of_p);

            printf("Price of product: %d\n ", productss[m].price);

            printf("Raw Materials : %s\n ", productss[m].raw_materials);

            printf("Quantity of Raw Materials : %s\n ", productss[m].quantity_of_raw_materials);

            printf("Enter the number of product you want to edit : ");
            scanf("%d", &p);

            printf("Number of product: ");
            scanf("%d", &productss[p].number_of_product);

            printf("Name of product: ");
            scanf("%s", productss[p].name_of_p);


            printf("Price of item: ");
            scanf("%d", &productss[p].price);

            printf("Enter the raw materials(WARNING! x-x-x format if more than one): ");
            scanf("%s", productss[p].raw_materials);

            printf("Enter the quantity of raw materials(WARNING! x-x-x format if more than one): ");
            scanf("%s", productss[p].quantity_of_raw_materials);

            printf("Enter 1 to continue / Enter 2 to return main menu :");
            scanf("%d", &cont_2);
            while (cont_2 < 1 || cont_2>2)
            {
                printf("Wrong entrance try again : ");
                scanf("%d", &cont_2);
                system("cls");
            }
            if (cont_2 == 1)
            {
                delay();
                product();
            }
            else if (cont_2 == 2)
            {
                delay();
                main();
            }



        }
        if (choice_2 == 3)
        {
            printf("Check Warehouse");
            delay();

            printf("\n-------------- All Product Details ---------------\n"); //bozuk
            for (int m = 1; m < k; m++) {
                printf("Number of product: %d\n ", productss[m].number_of_product);

                printf("Name of product: %s\n ", productss[m].name_of_p);

                printf("Price of product: %d\n ", productss[m].price);

                printf("Raw Materials : %s\n ", productss[m].raw_materials);

                printf("Quantity of Raw Materials : %s\n ", productss[m].quantity_of_raw_materials);


            }
            printf("Enter 1 to continue / Enter 2 to return main menu :");
            scanf("%d", &cont_2);
            while (cont_2 < 1 || cont_2>2)
            {
                printf("Wrong entrance try again : ");
                scanf("%d", &cont_2);
                system("cls");
            }
            if (cont_2 == 1)
            {
                delay();
                product();
            }
            else if (cont_2 == 2)
            {
                delay();
                main();
            }

        }
        else
        {
            printf("Main Menu");
            delay();
            main();
        }
    }
}


    void employee() //new problem if you want to add more employees than one time j will refresh
    {
        int choice_3;
        int cont;

        printf("\n\n\n\t\t\t\xB3\xB3\xB3\xB3\xB3\xB3\xB3 WELCOME TO EMPLOYEE MANAGEMENT\xB3\xB3\xB3\xB3\xB3\xB3\xB3");
        printf("\n\n\t\t1.Add Employee\n\t\t2.Edit Employee\n\t\t3.Check Employee List\n\t\t4.Exit To Menu\n\n\t\tEnter your choice:");
        scanf("%d", &choice_3);
        while (choice_3 < 1 || choice_3>4)
        {
            printf("Wrong entrance try again : ");
            scanf("%d", &choice_3);
            system("cls");
        }
        if (choice_3 == 1)
        {
            printf("Add Employee");
            delay();


            printf("\nEnter how many employees you want to add :");
            scanf("%d", &n);

            //Taking each employee detail as input
            printf("\nEnter %d Employee Details \n \n", n);
            for (int j = 1; j < n; j++) {
                printf("Employee %d:- \n", j);

                printf("Major: ");
                scanf("%s", employees[j].major);


                printf("Name: ");
                scanf("%s", employees[j].name);


                printf("Surname: ");
                scanf("%s", employees[j].surname);

                printf("Id: ");
                scanf("%lld", &employees[j].id);


                printf("Date of birth (month-day-year): ");
                scanf("%d-%d-%d", &employees[j].birth_m, &employees[j].birth_d, &employees[j].birth_y);


                printf("Phone Number: ");
                scanf("%lld", &employees[j].phone_number);

                printf("Salary: ");
                scanf("%lf", &employees[j].salary);


            }
            printf("\nDetails taken.\n");
            delay();
            employee();
        }
        else if (choice_3 == 2)
        {
            //hard part...
            printf("\nEdit Employee");
            delay();


        }
        else if (choice_3 == 3)
        {
            
            printf("\nCheck Employee List");
            delay();
            printf("\n-------------- All Employees Details ---------------\n"); //bozuk
            for (int j = 0; j < n; j++) {
                printf("Major: %s\n ", employees[j].major);

                printf("Name: %s\n ", employees[j].name);

                printf("Surname: %s\n ", employees[j].surname);

                printf("Id: %lld\n", employees[j].id);

                printf("Date of birth (month-day-year): %d-%d-%d\n ", employees[j].birth_m, employees[j].birth_d, employees[j].birth_y);

                printf("Phone Number: %lld\n", employees[j].phone_number);

                printf("Salary: %0.2lf\n\n", employees[j].salary);

                //can do problem if you want to make a loop...
            }
            printf("Enter 1 to continue / Enter 2 to return main menu :");
            scanf("%d", &cont);
            while (cont < 1 || cont>2)
            {
                printf("Wrong entrance try again : ");
                scanf("%d", &cont);
                system("cls");
            }
            if (cont == 1)
            {
                delay();
                employee();
            }
            else if (cont == 2)
            {
                delay();
                main();
            }

        }
        else
        {
            printf("Main Menu");
            delay();
            main();
        }
    }


int order()
{
    int choice_3;
    int cont_3;
    printf("\n\n\n\t\t\t\xB4\xB4\xB4\xB4\xB4\xB4\xB4 WELCOME TO ORDER MANAGEMENT\xB4\xB4\xB4\xB4\xB4\xB4\xB4");
    printf("\n\n\t\t1.Add Order\n\t\t2.Edit Order\n\t\t3.Check Order's\n\t\t4.Exit To Menu\n\n\t\tEnter your choice:");
    scanf("%d", &choice_3);
    while (choice_3 < 1 || choice_3>4)
    {
        printf("Wrong entrance try again : ");
        scanf("%d", &choice_3);
        system("cls");
    }
    if (choice_3 == 1)
    {
        printf("Add Order");
        delay();

        printf("\nEnter how many Orders you want to add :");
        scanf("%d",&x);

        //Taking each employee detail as input
        printf("\nEnter %d Order Details \n \n", x);
        for (int y = 0; y < x; y++) {
            printf("Order %d: \n", y + 1);

            printf("Please enter the Number of Item ordered:");
            scanf("%d", &customers[y].item_number);

            printf("Please enter the Quantity of Item ordered:");
            scanf("%d", &customers[y].quantity);

            printf("Please enter the Name of customer: ");
            scanf("%s",customers[y].name);

            printf("Please enter the Surname of customer:");
            scanf("%s",customers[y].surname);

            printf("Please enter the Id of customer:");
            scanf("%lld", &customers[y].id);

            printf("Please enter the Phone Number of customer:");
            scanf("%lld",&customers[y].phone_number);

        }
        printf("\nDetails taken.\n");
        delay();
        order();
    }
    if (choice_3 == 2)
    {
        printf("Edit Order");
        delay();

    }
    if (choice_3 == 3)
    {
        printf("Check Orders");
        delay();

        printf("\n-------------- Details of all orders ---------------\n"); //bozuk
        for (int y = 0; y < x; y++) {
            printf("Item Number: %d\n ", customers[y].item_number);

            printf("Quantity: %d\n ", customers[y].quantity);

            printf("Name of customer: %s\n ", customers[y].name);

            printf("Surname of customer : %s\n ", customers[y].surname);

            printf("Id of customer : %lld\n ", customers[y].id);

            printf("Phone number of customer : %lld\n ", customers[y].phone_number);

        }
        printf("Enter 1 to continue / Enter 2 to return main menu :");
        scanf("%d", &cont_3);
        while (cont_3 < 1 || cont_3>2)
        {
            printf("Wrong entrance try again : ");
            scanf("%d", &cont_3);
            system("cls");
        }
        if (cont_3 == 1)
        {
            delay();
            order();
        }
        else if (cont_3 == 2)
        {
            delay();
            main();
        }

    }
    else
    {
        printf("Main Menu");
        delay();
        main();
    }
       
}


/*
* customers

struct Customer {
     int item_number;
     int quantity;
     char name[30];
     char surname[30];
     long long int id;
     long long int phone_number;
 };


*/
























/*
int main()
{
char pass[10], password[10] = "codewithc";
int i = 0;
printf("\n\n\t\tEnter the password to login:");
scanf("%s", pass);

if (strcmp(pass, password) == 0)
{
    printf("\n\nPassword Match!\nLOADING");
    for (i = 0; i <= 6; i++)
    {
        Sleep(100);
        printf(".");
    }
    printf("Thank you");
    system("cls");
}
   return 0;
}*/

/*
#define _crt_secure_no_warnıngs

#include <stdio.h>
#include <stdlib.h>


typedef struct {
    char name[30];
    int id;
    double salary;
} employee;



int main()
{
    int n = 0;

    printf("enter how many employees you want to add :");
    scanf("%d", &n);



    //taking each employee detail as input
    printf("enter %d employee details \n \n", n);
    for (int i = 0; i < n; i++) {
        printf("employee %d:- \n", i + 1);

        //name
        printf("name: ");
        scanf("%s", employees[i].name);

        //ıd
        printf("ıd: ");
        scanf("%d", &employees[i].id);

        //salary
        printf("salary: ");
        scanf("%lf", &employees[i].salary);

        //to consume extra '\n' input


        printf("\n");
    }

    //displaying employee details
    printf("-------------- all employees details ---------------\n");
    for (int i = 0; i < n; i++) {
        printf("name \t: ");
        printf("%s \n", employees[i].name);

        printf("ıd \t: ");
        printf("%d \n", employees[i].id);

        printf("salary \t: ");
        printf("%.2lf \n", employees[i].salary);

        printf("\n");
    }

    return 0;
}








*/


