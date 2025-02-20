

#ifndef FUNCTION_H
#define FUNCTION_H

#endif //FUNCTION_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "//Users/tranhoangthanh/Documents/project_c_bank/include/datatype.h"


// dinh nghia ham


void mainMenu();



void menuAdmin();

void listUser();



int checkEmail(const char *email) ;

int checkPhoneNumber(char phone[]);
//doc du lieu file danh sach ng dung
void readUserData();

//them user
void addUser();
// tim kiem nguoi dung
void searchUserByName();
// chi tiet nguoi dung
void detailUser();
//back
void backToMenu();
// sap xep
void sortUsersByName();
//khoá họăc mở khoá
void lockOrUnlockUser();
//hien thi man hinh rieng
void clearScreen();
//check xem co bi trung kh
int isUserExists(const char *value, int type);
//admin dăng nhập
void loginAdmin();
//2 menu user
void menuUser();
//user đăng nhập
void loginUser();
//chi tiet tai khoan cảu nguoi dung
void detailUser2();
//chinh sưa thong tin ng dùn
void editUser(struct User *currentUser);
//nạp tiền
void depositMoney(struct User *currentUser);
//rút tiền
void withdrawMoney(struct User *currentUser);
//cập nhật số du trong file
void updateBalanceInFile(char *userId, double newBalance);