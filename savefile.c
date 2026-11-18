#include "header.h"

void savefile(sll *ptr)
{
    if(ptr == NULL)
    {
        printf("No student records are present\n");
        return;
    }

    FILE *fp = fopen("std.data", "w");

    if(fp == NULL)
    {
        printf("Unable to open file\n");
        return;
    }

    while(ptr)
    {
        fprintf(fp, "%d %s %f\n",
                ptr->rollno, ptr->name, ptr->marks);

        ptr = ptr->next;
    }

    fclose(fp);

    printf("All student records saved successfully!\n");
}
