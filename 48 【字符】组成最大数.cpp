#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	char Temp;
	int Pos;
	gets (a);
	for (int i = 0; i < strlen(a) ; i++)
	{
		Temp = a[i];
		Pos = i;
		for (int j = i + 1; j < strlen(a) ; j++)
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
	puts(a) ;
}
