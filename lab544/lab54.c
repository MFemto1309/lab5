#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "book.h"

void myStrcopy(char* finalStr, size_t strSize, const char* initStr) {
    if(!finalStr || !initStr || strSize == 0) return;
    strncpy(finalStr, initStr, strSize - 1);
    finalStr[strSize - 1] = '\0';
}
int main() {
    Book NoLongerHuman;

    myStrcopy(NoLongerHuman.author, MAX_AUTHOR_LEN, "Osamu Dazai");
    myStrcopy(NoLongerHuman.title, MAX_TITLE_LEN, "No Longer Human");
    myStrcopy(NoLongerHuman.category, MAX_CATEGORY_LEN, "Novella");
    NoLongerHuman.year = 1948;
    NoLongerHuman.price = 1239.99;

    printf("First Book:\n");
    printBook(&NoLongerHuman);
    printf("\n");

    Book* Ressurection = (Book*)malloc(sizeof(Book));
    myStrcopy(Ressurection->author, MAX_AUTHOR_LEN, "Lev Tolstoy");
    myStrcopy(Ressurection->title, MAX_TITLE_LEN, "Ressurection");
    myStrcopy(Ressurection->category, MAX_CATEGORY_LEN, "Novel");
    Ressurection->year = 1899;
    Ressurection->price = 569.99;

    printf("Second Book:\n");
    printBook(Ressurection);

    free(Ressurection);
    return 0;
}