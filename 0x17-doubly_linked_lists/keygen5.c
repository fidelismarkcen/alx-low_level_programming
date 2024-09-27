#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s username\n", argv[0]);
        return 1;
    }

    char *username = argv[1];
    char key[20];  // Adjust the size according to your needs

    // Generate a key based on the username (this is just a placeholder)
    // You should implement your logic to generate a valid key
    snprintf(key, sizeof(key), "correct_key");

    printf("%s\n", key);
    return 0;
}
