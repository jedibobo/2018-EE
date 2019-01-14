int * input(int n)  
{  
    int *num = (int *)malloc(n * sizeof(int));  
    for (int i = 0; i < n; i++)  
    {  
        scanf("%d", num + i);  
    }  
    return num;  
}  
int PrimCount(int *p, int n)  
{  
    int count=0;  
    for (int j = 0; j < n; j++)  
    {  
        if (isPrim(p[j]))  
            count += 1;  
    }  
    return count;  
}
