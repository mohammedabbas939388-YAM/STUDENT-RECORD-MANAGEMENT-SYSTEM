#include"student.h"
int countnode(std *p)
{
        int c=0;
        while(p)
        {
                c++;
                p=p->next;
        }
        return c;

}
void sort(std *ptr)
{
        std *qtr,tem;
        char op;
        if(ptr==0)
        {
                printf("No record found\n");
               return ;
        }
        printf("Select N/n for Sort with name \nP/p for Sort with percentage\n");
        scanf(" %c",&op);
        switch(op)
        {
                case 'n':
                case 'N':
                        {
                                int i=0,j=0,c=countnode(ptr);
                                for(i=0;i<c-1;i++)
                                {
                                        qtr=ptr->next;
                                        for(j=0;j<c-1-i;j++)
                                        {
                                                if(strcmp(ptr->name,qtr->name)>0)
                                                {
                                                        strcpy(tem.name,ptr->name);
                                                        tem.percentage=ptr->percentage;

                                                        strcpy(ptr->name,qtr->name);
                                                        ptr->percentage=qtr->percentage;

                                                        strcpy(qtr->name,tem.name);
                                                        qtr->percentage=tem.percentage;
                                                }
                                                qtr=qtr->next;

                                        }
                                        ptr=ptr->next;
                                }
                                printf("Sorted successfully with name\n");
                        }
                        break;
                case 'p':
                case 'P':
                        {
                                int i=0,j=0,c=countnode(ptr);
                                for(i=0;i<c-1;i++)
                                {
                                        qtr=ptr->next;
                                        for(j=0;j<c-1-i;j++)
                                        {
                                                if((ptr->name)<(qtr->name))
                                                {
                                                        strcpy(tem.name,ptr->name);
                                                        tem.percentage=ptr->percentage;

                                                        strcpy(ptr->name,qtr->name);
                                                        ptr->percentage=qtr->percentage;

                                                        strcpy(qtr->name,tem.name);
                                                        qtr->percentage=tem.percentage;
                                                }
                                                qtr=qtr->next;

                                        }
                                        ptr=ptr->next;
                                }
                                printf("Sorted successfully with percentage\n");


                        }
                        break;


        }
}
