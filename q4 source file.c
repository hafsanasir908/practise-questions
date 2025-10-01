#include <stdio.h>

int main() {
    char choice;
    int qty;
    int total = 0;


    printf("Please select from the following Menu:\n");
    printf("B = Burger (Rs.200)\n");
    printf("F = French Fries (Rs.50)\n");
    printf("P = Pizza (Rs.500)\n");
    printf("S = Sandwiches (Rs.150)\n");
    

    printf("Enter your choice (B/F/P/S): ");
    scanf("%c", &choice);

    printf("Enter quantity: ");
    scanf("%d", &qty);

    switch(choice) {
        case 'B':
            total = 200 * qty;
            printf("You ordered %d Burger(s).\n", qty);
            break;
            
        case 'F':
            total = 50 * qty;
            printf("You ordered %d French Fries.\n", qty);
            break;
            
        case 'P':
            total = 500 * qty;
            printf("You ordered %d Pizza(s).\n", qty);
            break;
            
        case 'S':
            total = 150 * qty;
            printf("You ordered %d Sandwich(es).\n", qty);
            break;
        default:
            printf("Invalid choice!");
            break;
    }

    printf("Total bill = Rs.%d\n", total);

    return 0;
}

