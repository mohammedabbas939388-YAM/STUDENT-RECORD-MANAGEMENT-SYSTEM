#include"student.h"
void deletenode(std **ptr)
{
        std *del=*ptr,*priv;
        int rln;
        char op,name[50];
        if(del==0)
        {
                printf("No records found\n");
                return ;
        }
        printf("Select one Option : \nEnter r/R to delete by rollno \nEnter n/N to delete by name\n");
        scanf(" %c ",&op);
        switch(op)
        {
                case 'r':
                case 'R':
                        {
                                printf("Enter rollno to delete : ");
                                scanf(" %d",&rln);
                                while(del)
                                {
                                        if(del->rollno==rln)
                                        {
                                                if(del==*ptr)
                                                        *ptr=del->next;
                                                else
                                                        priv->next=del->next;
                                                free(del);
                                                printf("Successfully deleted \n");
                                                return ;
                                        }
                                        priv=del;
                                        del=del->next;
                                }
                                printf("Rollno not found\n");
                        }
                         break;
                case 'n':
                case 'N':{
                                 printf("Enter Name to delete : ");
                                 scanf(" %s",name);
                                 while(del)
                                 {
                                         if(strcmp(name,del->name)==0)
                                         {
                                                 if(del==*ptr)
                                                         *ptr=del->next;
                                                 else
                                                         priv->next=del->next;
                                                 free(del);
                                                 printf("Successfully deleted \n");
                                                 return ;
                                         }
                                         priv=del;
                                         del=del->next;
                                 }
                                 printf("Name not found\n");
                         }
                         break;

                 default :printf("unknown choice\n");

        }
}
void del_all(std **ptr)
{
        if(*ptr==0)
        {
                printf("\nNo Records Found..\n");
                return ;
        }
        std *del=*ptr;
        while(del)
        {
                *ptr=del->next;
                free(del);
                del=*ptr;
        }
        *ptr=0;
        printf("All Records Deleted Successfully...\n");
}
