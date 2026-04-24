/*2. Write a program to keep records of books in a library.
Each record should include accession number, title, author, and price.
Provide optons to:
Display all book details
Search a book by author name
Count how many books are written by a partcular author*/
#include <stdio.h>
#include <string.h>

#define MAX 100   
typedef struct {
    int acc_no;
    char title[100];
    char author[100];
    float price;
} Book;

int main() {
    Book books[MAX];
    int n, i, choice;
    char search_author[100];
    int count = 0;

    printf("Enter number of books: ");
    scanf("%d", &n);


    for (i = 0; i < n; i++) {
        printf("\nEnter details for Book %d:\n", i + 1);
        printf("Accession Number: ");
        scanf("%d", &books[i].acc_no);
        printf("Title: ");
        scanf(" %[^\n]", books[i].title); 
        printf("Author: ");
        scanf(" %[^\n]", books[i].author);
        printf("Price: ");
        scanf("%f", &books[i].price);
    }


    do {
        printf("\n=========== LIBRARY MENU ===========\n");
        printf("1. Display all book details\n");
        printf("2. Search book(s) by author name\n");
        printf("3. Count books by a particular author\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\n%-10s %-25s %-25s %-10s\n", 
                       "Acc.No", "Title", "Author", "Price");
                printf("-----------------------------------------------------------------\n");
                for (i = 0; i < n; i++) {
                    printf("%-10d %-25s %-25s %-10.2f\n",
                           books[i].acc_no, books[i].title, books[i].author, books[i].price);
                }
                break;

            case 2:
                printf("\nEnter author name to search: ");
                scanf(" %[^\n]", search_author);
                printf("\nBooks by '%s':\n", search_author);
                int found = 0;
                for (i = 0; i < n; i++) {
                    if (strcasecmp(books[i].author, search_author) == 0) {
                        printf("Acc.No: %d | Title: %s | Price: %.2f\n",
                               books[i].acc_no, books[i].title, books[i].price);
                        found = 1;
                    }
                }
                if (!found)
                    printf("No books found by this author.\n");
                break;

            case 3:
                printf("\nEnter author name to count books: ");
                scanf(" %[^\n]", search_author);
                count = 0;
                for (i = 0; i < n; i++) {
                    if (strcasecmp(books[i].author, search_author) == 0)
                        count++;
                }
                printf("Total books written by '%s': %d\n", search_author, count);
                break;

            case 4:
                printf("\nExiting program. Goodbye!\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }
    } while (choice != 4);

    return 0;
}