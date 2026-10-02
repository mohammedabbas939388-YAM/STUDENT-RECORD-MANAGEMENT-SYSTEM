#include"student.h"
void saverecfile(std *ptr)
{
        if(ptr==0)
        {
                printf("No records found\n");
                return ;
        }
        FILE *fp=fopen("stud.dat","w");
        if(fp==0)
        {
                printf("file not found\n");
                return;
        }
        while(ptr)
        {
                fprintf(fp,"%d %s %f\n",ptr->rollno,ptr->name,ptr->percentage);
                ptr=ptr->next;
        }
        fclose(fp);
        printf("Successfully records saved in student.dat file\n ");
}
