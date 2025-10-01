//NAME : HAFSA NASIR
//ROLL NO : CT-068
#include <stdio.h>

int main() {
    char coffee_type, cup_size;
    int total_time = 0;

    printf("Enter coffee type (B for Black / W for White): ");
    scanf(" %c", &coffee_type);

    printf("Enter cup size (S for Single / D for Double): ");
    scanf(" %c", &cup_size);


    switch (coffee_type) {
        case 'W':
            total_time = 63; 
            break;
        case 'B':
            total_time = 77; 
            break;
        default:
            printf("Invalid coffee type!\n");
            break;
    } 
    if (cup_size == 'D') {
        total_time = total_time * 1.5;
    }


    printf("Total time for your order is : %d mins\n", total_time);

    return 0;
}

