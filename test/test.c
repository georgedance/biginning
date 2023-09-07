#include <stdio.h>

int main(void) {

    printf("prints out 80 chars to test terminal width.\n");

    printf("\n");

    for(int i = 0; i < 80; i++) {
        if(i%10 == 0) {
            printf("%d", i/10);
        }
        else {
            printf(" ");
        }
    }

    printf("\n");

    for(int i = 0; i < 80; i++) {
        printf("%d", i%10);
    }

    printf("\n");

    return 0;
}

