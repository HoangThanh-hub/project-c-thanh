#include<stdio.h>
#include<string.h>
#include"datatype.c"
//khai thac ham

//1 menu chinh
void mainMenu() {
    printf("***Bank Management System Using C***\n\n");
    printf("        CHOOSE YOUR ROLE\n");
    printf("====================================\n");
    printf("[1] Admin\n");
    printf("[2] User\n");
    printf("[0] Exit the Program\n");
    printf("====================================\n");
};



//3 menu admin
void menuAdmin() {
    printf("***Bank Management System Using C***\n\n");
    printf("            MENU\n");
    printf("====================================\n");
    printf("[1] Add a new user\n");
    printf("[2] Show all user\n");
    printf("[3] Show detail an user\n");
    printf("[4] Lock (unlock) an user\n");
    printf("[5] User guideline\n");
    printf("[6] About us\n");
    printf("[0] Exit\n");
    printf("======================================\n");
};

//2 nhap lua chon
void runMainMenu() {
    while(1) {
        int choice;
        printf("Please enter your choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                menuAdmin();
                break;
            case 2:
                printf("User\n");
            break;
            case 0:
                exit(0);
            default:
                printf("Invalid Choice\n");
        }
    }
};



//nhap thong tin

void AddUser() {
    struct User user;
    printf("*** Add a new user ***\n");
    printf("Enter the ID: ");
    fgets(user.userId, sizeof(user.userId), stdin);
    fflush(stdin);
    printf("Enter the Name: ");
    fgets(user.userName, sizeof(user.userName), stdin);
    fflush(stdin);
    printf("Enter the email: ");
    fgets(user.email, sizeof(user.email), stdin);
    fflush(stdin);
    printf("Enter the Phone number: ");
    fgets(user.phoneNumber, sizeof(user.phoneNumber), stdin);
    fflush(stdin);
    printf("Enter the gender: ");
    scanf("%d", &user.gender);
    printf("Enter the Date of Birth: \n");
    printf("   Enter the Day: ");
    scanf("%d", &user.dateOfBirth.day);
    printf("   Enter the Month: ");
    scanf("%d", &user.dateOfBirth.month);
    printf("   Enter the Year: ");
    scanf("%d", &user.dateOfBirth.year);
    printf("\nAdded successfully\n");
};

//bang danh sach
void ListUser() {
    printf("%50s","*** List User ***\n");
    printf("|============|=======================|================================|==============|==========|\n");
    printf("|%-12s|%-23s|%-32s|%-14s|%-10s|\n","UserId","Name","Email","Phone","Status");
    printf("|============|=======================|================================|==============|==========|\n");
}


