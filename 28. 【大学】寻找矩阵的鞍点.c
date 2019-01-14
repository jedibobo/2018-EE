#include <stdio.h>  
  
int main(int argc, char const *argv[])  
  
{  
  
    int row, col;  
  
    scanf("%d%d", &row, &col);  
  
    int matrix[row][col];  
  
    for (int i = 0; i < row; i++)  
  
        for (int j = 0; j < col; j++)  
  
            scanf("%d", &matrix[i][j]);  
  
    for (int i = 0; i < row; i++)  
  
        for (int j = 0, flag_row = 1, flag_col = 1; j < col; flag_row = 1, flag_col = 1, j++)  
  
        {  
  
            for (int k = 0; k < col; k++)  
  
                if (matrix[i][j] < matrix[i][k])  
  
                    flag_row = 0;  
  
            for (int k = 0; k < row; k++)  
  
                if (matrix[i][j] > matrix[k][j])  
  
                    flag_col = 0;  
  
            if (flag_row && flag_col)  
  
            {  
  
                printf("Point:a[%d][%d]==%d\n", i, j, matrix[i][j]);  
  
                return 0;  
  
            }  
  
        }  
  
    puts("No Point");  
  
    return 0;  
  
}
