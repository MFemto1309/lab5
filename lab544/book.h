#ifndef BOOK_H
#define BOOK_H

#include <stdio.h>

#define MAX_AUTHOR_LEN   100
#define MAX_TITLE_LEN    150
#define MAX_CATEGORY_LEN 50

typedef struct
{
    char author[MAX_AUTHOR_LEN];
    char title[MAX_TITLE_LEN];
    char category[MAX_CATEGORY_LEN];
    int year;
    double price;
} Book;

void printBook(const Book*);

#endif