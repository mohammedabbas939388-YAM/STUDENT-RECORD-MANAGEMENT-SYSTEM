#include"student.h"
extern int c;
std *hdptr=0;
int main()
{
        FILE *fp=fopen("stud.dat","r+");

         if(fp!=0)
        {
                std **ptr=&hdptr;
                std *new,*last;
                while(1)
                {
                        new=malloc(sizeof(std));
                        if(fscanf(fp,"%d %s %f",&new->rollno,new->name,&new->percentage)==-1)
                                break;

                        new->next=0;
                        if(*ptr==0)
                                *ptr=new;
                        else
                        {
                                last=*ptr;
                                while(last->next)
                                        last=last->next;
                                last->next=new;
                        }
                }
                printf("\033[31;3m\nStudent records copied from file...\n\033[0m");
        }
        char op;
        while(1)
        {
                printf("*** STUDENT RECORD MENU ***\n");
                printf( "\033[32ma/A : Add new record \nd/D : Delete a record \ns/S : Show the list \nm/M : Modify a record \nv/V : Save records \ne/E : Exit \nt/T : Sort the list \nl/L : Delete all the records \nr/R : Reverse the list \n\nEnter Your Choice:\033[0m\n");
                scanf(" %c",&op);
                switch(op)
                {

                        case 'a':
                        case 'A':
                                addnode(&hdptr);
                                break;
                        case 'd':
                        case 'D':
                                deletenode(&hdptr);
                                break;
                        case 's':
                        case 'S':
                                displayrecords(hdptr);
                                break;
                        case 'm':
                        case 'M':
                                modifyrecord(hdptr);
                                break;
                        case 'v':
                        case 'V':
                                saverecfile(hdptr);
                                break;
                        case 'e':
                        case'E':
                                exitm(&hdptr);
                                break;
                        case 't':
                        case 'T':
                                sort(hdptr);
                                break;
                        case 'l':
                        case'L':
                                del_all(&hdptr);
                                break;
                        case 'r':
                        case 'R':
                                rev_list(&hdptr);
                                break;
                        default:printf("unknown choice\n");
                }

        }
}
