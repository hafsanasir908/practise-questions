//NAME : HAFSA NASIR
//ROLL NO : CT-068

#include <stdio.h>
int main() {
    float nts, fsc;

    printf("Enter your NTS marks percentage: ");
    scanf("%f", &nts);

    printf("Enter your F.Sc marks percentage: ");
    scanf("%f", &fsc);

    if (fsc >= 70 && nts >= 70) {
        printf("You are eligible for Oxford IT Department.\n");
    }
    else if (fsc >= 70 && nts >= 60) {
        printf("You are eligible for Oxford Electronics Department.\n");
    }
    else if (fsc >= 70 && nts >= 50) {
        printf("You are eligible for Oxford Telecommunication Department.\n");
    }
    else if (fsc >= 60  && fsc <=70 && nts >= 50) {
        printf("You are eligible for MIT IT Department.\n");
    }
    else if (fsc >= 50 && fsc <=59 && nts >= 50) {
        printf("You are eligible for MIT Chemical Department.\n");
    }
    else if (fsc >= 40 && fsc <=50 && nts >= 50) {
        printf("You are eligible for MIT Computer Department.\n");
    }
    else {
        printf("Sorry, you are not eligible for admission.\n");
    }

    return 0;
}

