#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: %s username key\n", argv[0]);
        return 1;
    }

    // Simulating segmentation fault if the key is incorrect
    if (strcmp(argv[2], "correct_key") != 0) {
        // This will cause a segmentation fault
        char *p = NULL;
        *p = 'a';
    }

    printf("Congrats!\n");
    return 0;
}
