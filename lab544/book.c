#include "book.h"

void printBook(const Book* book) {
    if(!book) return;

    printf("=== The Book: ===\n");
    printf(" Title: %s\n", book->title);
    printf(" Author: %s\n", book->author);
    printf(" Year: %d\n", book->year);
    printf(" Price: %.2lf\n", book->price);
    printf(" Category: %s\n", book->category);
}