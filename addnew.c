#include "header.h"

void addnew(sll **ptr)
{
    sll *n = malloc(sizeof(sll));

    if(n == NULL)
    {
        printf("Memory allocation failed\n");
        return;
    }

    printf("Enter name and marks:\n");

    n->rollno = roll(&rol, &size);

    scanf("%19s %f", n->name, &n->marks);

    n->next = *ptr;
    *ptr = n;

    printf("\nStudent added successfully!\n");

    printf("\nNewly Added Student:\n");
    printf("Roll No: %d\n", n->rollno);
    printf("Name   : %s\n", n->name);
    printf("Marks  : %.2f\n", n->marks;
}
