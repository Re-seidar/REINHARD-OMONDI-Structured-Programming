#include <stdio.h>
#include <stdlib.h>

int login();
void ShowMenu();
void checkBalance(float balance);
float deposit(float balance);
float withdraw(float balance);


int main(){
       float balance = 10000.0;
       int choice;

       // Login first
       if (!login()){
        printf("Too many attempts. Login Failed!\n");
        return 0;
       }
       //successful Login
       do {
          ShowMenu();
          printf("Enter your Choice:\n");
          scanf("%d", &choice);

          switch(choice){
          case 1:
                checkBalance(balance);
                break;
          case 2:
                balance = deposit(balance);
                break;
          case 3:
                balance = withdraw(balance);
                break;
          case 4:
                printf("Thank You for using the ATM. Goodbye!\n");
                break;
          default:
                printf("Invalid Choice.Please TRY AGAIN.\n");

         }
   }while(choice != 4);


  return 0;
}

//Login function
int login()
{

    int correctPin = 1234;
    int inputPin;
    int allowedAttempts = 3;
    int currentAttempt = 1;
    int Choice;

    while (currentAttempt <= allowedAttempts){
        printf("You have %d attempts left\n", allowedAttempts - currentAttempt + 1);
        printf("inputPin:\n");
        scanf("%d",&inputPin);


        if (inputPin == correctPin){
            printf("Access Granted\n");
            return 1;

        }else{
            printf("Access Denied!\n");
            }
        if (inputPin<999){
                printf("Pin too short\n");
            }else if(inputPin>9999){
                printf("Pin too long\n");
            }else{
                 printf("Corrrect pin length\n");
            }

          currentAttempt++;
        }

   return 0;
}

// Display ATM MENU
void ShowMenu(){
    printf("\n-----ATM MENU-----\n");
    printf("1. Check Balance\n");
    printf("2. Deposit Money\n");
    printf("3. Withdraw Money\n");
    printf("4. Exit\n");
    printf("--------------------\n");

}

//Balance Enquiry
void checkBalance(float balance){
    printf("Your account balance is:$%.2f\n", balance);
}

//Deposit money
float deposit(float balance){
   float amount;
   printf("Enter amount to deposit\n");
   scanf("%f", &amount);

   if (amount <= 0){
      printf("Invalid Amount!\n");
      return balance;
   }

   balance += amount;
   printf("Deposit Successful! New Balance: $%.2f", balance);

   return balance;
}

//withdraw money
float withdraw(float balance){
    float amount;
    printf("Enter Amount to withdraw:\n");
    scanf("%f",&amount);

    if (amount <= 0) {
        printf("Invalid amount.\n");
        return balance;
    }

    if (amount > balance) {
        printf("Insufficient balance. Transaction cancelled.\n");
        return balance;
    }

    balance -= amount;
    printf("Withdrawal successful! New balance: $%.2f\n", balance);

    return balance;

}


