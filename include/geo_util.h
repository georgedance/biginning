#ifndef GEO_UTIL_H
#define GEO_UTIL_H

#include <stdio.h>
#include <stdlib.h>

void print_args(int argc, char *argv[]) {
    for(int i = 0; i < argc; i++) {
        printf("argv[%d]: %s\n", i, argv[i]);
    }
}

void print_args_silent(int argc, char *argv[]) {
    (void) argc;
    (void) argv;
}

void spacer(int count) {
    if(count == 0) {
        count = 20;
    }
    for(int i = 0; i < count; i ++) {
        printf("-");
    }
    printf("\n");
}

void error(char *msg) {
    printf("%s\n", msg);
}

void fatal_error(char *msg) {
    error(msg);
    exit(EXIT_FAILURE);
}

void fatal_perror(char *msg) {
    perror(msg);
    exit(EXIT_FAILURE);
}

void unreachable(char *msg) {
    printf("unreachable: %s\n", msg);
    exit(EXIT_FAILURE);
}

#endif

