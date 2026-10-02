#include"student.h"
void displayrecords(std *ptr)
{
        std *dis=ptr;
        if(dis==0)
        {
                printf("No Records found\n");
                return ;
        }

        printf("Roll No\tName\tPercentage\n");
        while(dis)
        {
                //printf("Roll No\tName\tPercentage\n");
                printf("%d\t%s\t%f\n",dis->rollno,dis->name,dis->percentage);
                dis=dis->next;
        }

}
