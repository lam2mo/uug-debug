#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <getopt.h>

#define BUFFER_SIZE 1024

int main(int argc, char *argv[])
{
    /* mode flags and arguments */
    bool default_mode = true;
    bool special_mode = false;
    bool print_mode   = false;
    char *print_filename = NULL;
 
    /* parse command-line flags with getopt() */
    int c;
    while ((c = getopt(argc, argv, "sp:")) != -1) {
        switch (c) {
            case 's':
                special_mode = true;
                default_mode = false;
                break;
            case 'p':
                print_mode   = true;
                default_mode = false;
                print_filename = optarg;    /* save filename */
                break;
            default:
                printf("Invalid argument.\n");
                return EXIT_FAILURE;
        }
    }
 
    /* default mode */
    if (default_mode) {
        printf("Hello, world!\n");
    }
 
    /* special mode */
    if (special_mode) {
        printf("Hello, special people!\n");
    }
 
    /* print mode */
    if (print_mode) {
        FILE* f = fopen(print_filename, "r");
        if (f == NULL) {
            printf("Unable to open file: %s\n", print_filename);
            exit(EXIT_FAILURE);
        }
        char buffer[BUFFER_SIZE];
        while (fgets(buffer, BUFFER_SIZE, f) != NULL) {
            printf("%s", buffer);
            if (buffer[strlen(buffer)-1] != '\n') {
                printf("\n");
            }
        }
    }

    return EXIT_SUCCESS;
}