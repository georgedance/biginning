#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#ifdef _WIN32
#include <windows.h>
void usleep(unsigned int microseconds) {
    Sleep(microseconds / 1000);
}
#else
#include <unistd.h>
#endif

#include "font.h"
#include "geo_util.h"

#define DELAY_MS 250000
#define PROGRAM_NAME STRING(biginning)
#define STRING(x) #x



void print_letter(int c) {
    for(int i = 0; i < (int) sizeof(font[0][0]); i++ ) {
        for(int j = 0; j < (int) sizeof(font[0][0]); j++) {
            if(font[c-1][i][j]) {
                printf("#");
            }
            else {
                printf(" ");
            }
            printf(" ");
        }
        printf("\n");
    }
    printf("\n");
}



// TODO: cast char to int and print
// TODO: maybe compare with values in font_index?
//      ^ that could easily be done with `(int) char *c < 128` 
void print_string(char *str) {
    // loops over str
    for(int i = 0; i < (int) strlen(str); i++) {
        // converts chars to numbers
        print_letter(str[i]);
        usleep(DELAY_MS); // Quarter of a Second
    }
}



// TODO: think about how this works
void print_string_sideways(void) {
    // assuming terminal is 80 chars wide, 10 chars can fit
    // just need to scan across the tops of the arrays and then add a newline
    // and then add a 
}



void print_usage(char *argv[]) {
    printf("%s: more arguments required\n", PROGRAM_NAME);
    printf("Usage: %s [text ...]\n", PROGRAM_NAME);
}



int main(int argc, char *argv[]) {
    // TODO: maybe add a feature to read from .txt files?
    print_args_silent(argc, argv);

    /* // Testing ASCII values
    for(int i = 0; i < 128; i++) {
        print_letter((char) i);
        usleep(DELAY_MS);
    }
    */

    if(argc > 1) {

#ifdef _WIN32
    printf("Please fullscreen and then press Enter to continue...");
    getchar();
    printf("\n");
#endif // _WIN32

        for(int i = 1; i < argc; i++) {
            print_string(argv[i]);
            if(i < argc - 1) {
                print_letter(' ');
            }
        }

    }
    else {
        print_usage(argv);
    }

#ifdef _WIN32
    printf("\nPress Enter to quit... ");
    getchar();
#endif // _WIN32

    return EXIT_SUCCESS;
}

