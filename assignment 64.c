#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_BOOKS 10
#define NAME_LENGTH 100

struct Book {
    int id;
    char name[NAME_LENGTH];
    float price;
};

void clear_input_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {
        // clears input buffer
    }
}

int main() {
    struct Book books[MAX_BOOKS];
    int i;

    printf("--- C Book Inventory Program ---\n");
    printf("Please enter the details for %d books.\n", MAX_BOOKS);

    for (i = 0; i < MAX_BOOKS; i++) {
        printf("\n=== Entering details for Book %d ===\n", i + 1);

        printf("Enter Book ID: ");
        if (scanf("%d", &books[i].id) != 1) {
            printf("Invalid input for ID. Exiting.\n");
            return EXIT_FAILURE;
        }

        clear_input_buffer();

        printf("Enter Book Name (max %d chars): ", NAME_LENGTH - 1);
        if (fgets(books[i].name, NAME_LENGTH, stdin) == NULL) {
            printf("Error reading book name. Exiting.\n");
            return EXIT_FAILURE;
        }

        size_t len = strlen(books[i].name);
        if (len > 0 && books[i].name[len - 1] == '\n') {
            books[i].name[len - 1] = '\0'; // remove newline
        }

        printf("Enter Book Price: $");
        if (scanf("%f", &books[i].price) != 1) {
            printf("Invalid input for Price. Exiting.\n");
            return EXIT_FAILURE;
        }
    }

    clear_input_buffer();

    printf("\n\n===================================================================\n");
    printf("                     COMPLETE BOOK INVENTORY (10 Records)              \n");
    printf("===================================================================\n");
    printf("| %-4s | %-10s | %-40s | %-10s |\n", "No.", "ID", "Book Name", "Price");
    printf("-------------------------------------------------------------------\n");

    for (i = 0; i < MAX_BOOKS; i++) {
        printf("| %-4d | %-10d | %-40s | $%-9.2f |\n",
               i + 1,
               books[i].id,
               books[i].name,
               books[i].price);
    }

    printf("===================================================================\n");

    return EXIT_SUCCESS;
}