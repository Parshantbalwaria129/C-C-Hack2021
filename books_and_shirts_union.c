#pragma pack(1)
#include <stdio.h>
struct store
{
    double price;
    union
    {
        struct
        {
            char *title;
            char *author;
            int num_pages;
        } books;

        struct
        {
            int color;
            int size;
            char *design;
        } shirts;
    } items;
};

int main()
{
    struct store s;
    s.items.books.title = "The Alchemist";
    s.items.books.author = "Paulo Coelho";
    s.items.books.num_pages = 197;
    printf("%s\n", s.items.books.title);
    printf("%ld", sizeof(s));
    return 0;
}
