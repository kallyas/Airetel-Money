/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choice = 0;
    
    while(1) {
        printf("====Welcome To Airtel Mobile Money ====\n");
        printf("1. Send Money\n");
        printf("2. Airtime/Bundles\n");
        printf("3. Withdraw cash\n");
        printf("4. Pay Bills\n");
        printf("5. Payements\n");
        printf("6. School fees\n");
        printf("7. Financial Services\n");
        printf("8. Wewole\n");
        printf("9. Airtel Money Pay\n");
        printf("10. My Account\n");
        printf("11. Exit\n");
        printf("Enter your choice: \n");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1:
                printf("You selected send Money\n");
                break;
            case 2:
                printf("You selected Airtime/Bundles\n");
                break;
            case 3:
                printf("You selected Withdraw cash\n");
                break;
            case 4:
                printf("You selected Pay Bills\n");
                break;
            case 5:
                printf("You selected Payements\n");
                break;
            case 6:
                printf("You selected School fees\n");
                break;
            case 7:
                printf("You selected Financial Services\n");
                break;
            case 8:
                printf("You selected  Wewole\n");
                break;
            case 9:
                printf("You selected Airtel Money Pay\n");
                break;
            case 10:
                printf("You selected My Account\n");
                break;
            case 11:
                printf("Thank you for using Airtel Money!\n");
                printf("Bye!!");
                exit(0);
        }
    }

    return 0;
}
