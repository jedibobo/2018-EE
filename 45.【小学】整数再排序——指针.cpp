void sort(int * a, int n, int(*pf)(int, int))  
{  
    int Temp, Pos;  
    if (pf==up)//升序排列  
    {  
        for (int i = 0; i < n; i++)  
        {  
            Temp = a[i];  
            Pos = i;  
            for (int j = i + 1; j < n; j++)  
            {  
                if (a[j] < Temp)  
                {  
                    Temp = a[j];  
                    Pos = j;  
                }  
            }  
            a[Pos] = a[i];  
            a[i] = Temp;  
        }  
    }  
    else  
    {  
        for (int i = 0; i < n; i++)  
        {  
            Temp = a[i];  
            Pos = i;  
            for (int j = i + 1; j < n; j++)  
            {  
                if (a[j] > Temp)  
                {  
                    Temp = a[j];  
                    Pos = j;  
                }  
            }  
            a[Pos] = a[i];  
            a[i] = Temp;  
        }  
    }  
}  
int input(int *a, int n)  
{  
    for (int i = 0; i < n; i++)  
    {  
        scanf("%d", &a[i]);  
    }  
}  
int output(int *a, int n)  
{  
    for (int i = 0; i < n; i++)  
    {  
        printf("%d,", a[i]);  
    }  
    printf("\n");  
}  
int up(int a, int b)  
  
{  
  
    if (a < b)  
  
    {  
  
        return 1;  
  
    }  
  
    else if (a == b)  
  
    {  
  
        return 0;  
  
    }  
  
    else  
  
    {  
  
        return -1;  
  
    }  
  
}  
  
int down(int a, int b)  
  
{  
  
    if (a < b)  
  
    {  
  
        return -1;  
  
    }  
  
    else if (a == b)  
  
    {  
  
        return 0;  
  
    }  
  
    else  
  
    {  
  
        return 1;  
  
    }  
  
} 
