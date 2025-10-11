#include <stdio.h>

int main() {
//    int a = 0, b = 1, result;
//    int sum;
//
//    printf("Fibonacci series up to 1000:\n");
//    printf("%d %d ", a, b);
//
//    while (1) {
//        result = a + b;
//        if (result > 1000)
//            break;
//        printf("%d ", result);
//
//        if (result % 3 == 0 && result % 5 == 0  && result % 7 == 0)
//            sum = sum + result;
//
//        a = b;
//        b = result;
//    }
//
//    printf("\nSum of Fibonacci numbers divisible by 3, 5, and 7 = %d\n", sum);
//    return 0;

//now with for loop


    int a = 0, b = 1, result = 0;
    int sum = 0;

    printf("Fibonacci series up to 1000:\n");
    printf("%d %d ", a, b);

    for (;;) { // infinite loop like while(1)
        result = a + b;
        if (result > 1000)
            break;

        printf("%d ", result);

        if (result % 3 == 0 && result % 5 == 0 && result % 7 == 0)
            sum += result;

        a = b;
        b = result;
    }

    printf("\nSum of Fibonacci numbers divisible by 3, 5, and 7 = %d\n", sum);
    
    // while loop is more efficient because it is more readable and easier to understand.

    return 0;
}


