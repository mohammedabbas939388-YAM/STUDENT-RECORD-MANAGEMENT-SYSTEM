#include"student.h"
extern int c;
void addbegin(std **ptr)
{
        std *new;
        int rlno;
        new=malloc(sizeof(std));
        printf("Enter rollno, student Name and Percentage \n");
        scanf("%d %s %f",&new->rollno,new->name,&new->percentage);
        new->next=*ptr;
        *ptr=new;

}
void addnode(std **ptr)
{
        int i = 1;
        std *new = malloc(sizeof(std));
        if (new == NULL) {
                printf("Memory allocation failed!\n");
                return;
        }

        printf("enter name and perc\n");
        scanf("%s %f", new->name, &new->percentage);
        new->next = NULL;

                                                        // 1: List is completely empty
        if (*ptr == NULL)
        {
                new->rollno = 1;
                *ptr = new;
                return;
        }
        std *curr = *ptr;
        std *prev = NULL;
                                                   // 2: Check if rollno 1  is missing 
        if (curr->rollno > 1) {
                new->rollno = 1;
                new->next = *ptr;
                *ptr = new;
                return;
        }
        while (curr != NULL)                 /// sorting 
        {
                if (curr->rollno == i)
                {

                        prev = curr;
                        curr = curr->next;
                        i++;
                }
                else
                        break;

        }
        new->rollno = i;

    // Insert the node at the correct sorted position
    new->next = curr; // Links to the next node (or NULL if at the end)
    if (prev != NULL) {
        prev->next = new; // Links previous node to new node
    }
}
