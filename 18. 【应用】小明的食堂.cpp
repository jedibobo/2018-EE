#include<stdio.h>
int main ()
{
    int a,b,c;
	float badd,dadd,chargeb,charged;
	while (1)
	{
		printf("----- Ӫҵʱ�� -----\n");
		printf("  1. ���\n");
    	printf("  2. �в�\n");
    	printf("  3. ���\n");
    	printf("  4. ҹ��\n");
    	printf("  0. �˳�\n");
    	printf("������ѡ�");
		scanf("%d",&a);
		if (a==1)
		{
			while (1)
        	{
				printf("----- ��Ͳ˵� -----\n");
       			printf(" 1. ������0.32\n");
       			printf(" 2. ������0.70\n");
        		printf(" 3. ������0.50\n");
        		printf(" 4. �����ԣ�1.50\n");
        		printf(" 5. С���ӣ�0.50\n");
        		printf(" 0. ѡ�����\n");
        		printf("������ѡ�");
        		scanf("%d",&b);
        		if (b==0)
        		{
        			break;
				}
        		switch (b)
        		{
        			case 1:
					printf("��������������");
					scanf("%d",&c);
					badd=0.32*c;
					break;
        			case 2:printf("���붹��������");
					scanf("%d",&c);
					badd=0.7*c;
					break;
        			case 3:printf("���뼦��������");
					scanf("%d",&c);
					badd=0.5*c;
					break;
        			case 4:printf("���붹����������");
					scanf("%d",&c);
					badd=1.5*c;
					break;
        			case 5:printf("����С����������");
					scanf("%d",&c);
					badd=0.5*c;
					break;
        			default:continue;
				}
				chargeb+=badd;	
			}
			printf("��ͺϼƣ�%.2f��\n",chargeb);
		}
		else if (a==4)
		{
	   		
        	while (1)
        	{
				printf("----- ҹ���˵� -----\n");
    			printf(" 1. ��⽣�2.50\n");
        		printf(" 2. �ڱ���1.00\n");
        		printf(" 3. �輦����0.60\n");
        		printf(" 4. ��������3.50\n");
        		printf(" 0. ѡ�����\n");
        		printf("������ѡ�");
        		scanf("%d",&b);
        		if (b==0)
        		{
        			break;
				}
				switch (b)
				{
					case 1:
					printf("�������������");
					scanf("%d",&c);
					dadd=2.5*c;
					break;
        			case 2:printf("�����ڱ�������");
					scanf("%d",&c);
					dadd=1.0*c;
					break;
        			case 3:printf("����輦��������");
					scanf("%d",&c);
					dadd=0.6*c;
					break;
        			case 4:printf("���뼦����������");
					scanf("%d",&c);
					dadd=3.5*c;
					break;
        			default:continue;
				}
				charged+=dadd;
			}
			printf("ҹ���ϼƣ�%.2f��\n",charged);
		}
		else if(a==0)
		{
			break;
		}
		else 
		{
			continue;
		}
	}
	printf("������ô����ʳ�Ż���%.2f��\n",(chargeb+charged));
	return 0;
}
