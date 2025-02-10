#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
//tao struct

//1 date
struct Date{
  int day, month, year;
  };


 //2 account infor

  struct AccountInfo {
    char userId[10];
    float balance;
    bool status;
    char userName[10];
    char password[10];
  };



  // 3 user

  struct User {
    char userId[10];
    char userName[20];
    struct Date dateOfBirth;
    bool gender;
    char phoneNumber[10];
    char email[20];
  };