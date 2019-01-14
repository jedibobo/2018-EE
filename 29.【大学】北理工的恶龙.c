#include<stdio.h>  
 
#include <stdlib.h>  
  
int cmpint(const void *p1, const void *p2)  
  
{  
  
    return *(int *)p1 - *(int *)p2;  
  
}  
  
void kill(int num_brave, int num_head,int *brave, int *head, int *grade)  
  
{  
  
    int curr_brave, curr_head;  
  
    _Bool killed = 0;  
  
    for(curr_brave = curr_head = 0;curr_head < num_head;curr_head++)  
  
    {  
  
        do  
  
        {  
  
            if(*(head + curr_head) <= *(brave + curr_brave))  
  
            {  
  
                (*grade) += *(brave + curr_brave);  
  
                killed = 1;  
  
            }  
  
            curr_brave++;  
  
        }while(!killed);  
  
        killed = 0;  
  
    }  
  
}  
  
int main (void)  
  
{  
  
    int head,brave;  
  
    scanf("%d%d",&head,&brave);  
  
    if (head < 1 || brave < 1)  
  
        return 1;  
  
    int height[brave];  
  
    int diameter[head];  
  
    for(int i = 0;i < head;i++)  
  
        scanf("%d",diameter + i);  
  
    for(int i = 0;i < brave;i++)  
  
        scanf("%d",height + i);  
  
    qsort(height, brave, sizeof (int), cmpint);  
  
    qsort(diameter, head, sizeof (int), cmpint);  
  
    if(height[brave - 1] < diameter[head - 1] || brave < head)  
  
    {  
  
        puts("bit is doomed!");  
  
        return 1;  
  
    }  
  
    int grades = 0;  
  
    kill(brave, head, height, diameter, &grades);  
  
    printf("%d\n", grades);  
  
    return 0;  
  
} 
