/*
 * Name: Camila Blanco
 * CWID: A20541085
 * Email-ID: camblan@okstate.edu
 */

#include <stdio.h>

// SUM FUNCTION
int digitSum(int userNum) {
    int numSum = 0;

    while (userNum > 0) {
        numSum = numSum + (userNum % 10);
        userNum = userNum / 10;
    }

    return numSum;
}

// PRODUCT FUNCTION
int digitProduct(int userNum) {
    int numProduct = 1;

    while (userNum > 0) {
        numProduct = numProduct * (userNum % 10);
        userNum = userNum / 10;
    }

    return numProduct;
}

// AVERAGE FUNCTION
double digitAverage(int userNum) {
    int numSum = 0;
    int totNums = 0;

    while (userNum > 0) {
        numSum = numSum + (userNum % 10);
        userNum = userNum / 10;
        totNums = totNums + 1;
    }

    return (double)numSum / totNums;
}

// REVERSE FUNCTION
void reverseNumber(int userNum) {
    if (userNum > 0) {
        printf("%d", userNum % 10);
        reverseNumber(userNum / 10);
    }
}

int main() {

    int userNum;
    int userChoice;

    printf("\nInsert Number: ");
    scanf("%d", &userNum);

    printf("\n");
    printf("*************** MENU ******************\n");
    printf("1. Display the Sum of the digits.\n");
    printf("2. Display the Multiplication of the digits.\n");
    printf("3. Display the Average of the digits.\n");
    printf("4. Display the Reverse of the Number.\n");
    printf("***************************************\n");
    printf("Please Enter your Choice: ");
    scanf("%d", &userChoice);

    switch (userChoice) {

        case 1:
            printf("The Sum of the digits in the number is = %d\n",
                   digitSum(userNum));
            break;

        case 2:
            printf("The Product of the digits in the number is = %d\n",
                   digitProduct(userNum));
            break;

        case 3:
            printf("The Average of the digits in the number is = %0.5lf\n",
                   digitAverage(userNum));
            break;

        case 4:
            printf("The Reverse of the number is = ");
            reverseNumber(userNum);
            printf("\n");
            break;

        default:
            printf("Invalid choice.\n");
    }

    return 0;
}

