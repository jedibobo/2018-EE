#include<stdio.h>
int main ()
{
    int a,b,c;
	float badd,dadd,chargeb,charged;
	while (1)
	{
		printf("----- 营业时间 -----\n");
		printf("  1. 早餐\n");
    	printf("  2. 中餐\n");
    	printf("  3. 晚餐\n");
    	printf("  4. 夜宵\n");
    	printf("  0. 退出\n");
    	printf("请输入选项：");
		scanf("%d",&a);
		if (a==1)
		{
			while (1)
        	{
				printf("----- 早餐菜单 -----\n");
       			printf(" 1. 油条，0.32\n");
       			printf(" 2. 豆浆，0.70\n");
        		printf(" 3. 鸡蛋，0.50\n");
        		printf(" 4. 豆腐脑，1.50\n");
        		printf(" 5. 小包子，0.50\n");
        		printf(" 0. 选择结束\n");
        		printf("请输入选项：");
        		scanf("%d",&b);
        		if (b==0)
        		{
        			break;
				}
        		switch (b)
        		{
        			case 1:
					printf("输入油条数量：");
					scanf("%d",&c);
					badd=0.32*c;
					break;
        			case 2:printf("输入豆浆数量：");
					scanf("%d",&c);
					badd=0.7*c;
					break;
        			case 3:printf("输入鸡蛋数量：");
					scanf("%d",&c);
					badd=0.5*c;
					break;
        			case 4:printf("输入豆腐脑数量：");
					scanf("%d",&c);
					badd=1.5*c;
					break;
        			case 5:printf("输入小包子数量：");
					scanf("%d",&c);
					badd=0.5*c;
					break;
        			default:continue;
				}
				chargeb+=badd;	
			}
			printf("早餐合计：%.2f。\n",chargeb);
		}
		else if (a==4)
		{
	   		
        	while (1)
        	{
				printf("----- 夜宵菜单 -----\n");
    			printf(" 1. 馄饨，2.50\n");
        		printf(" 2. 馅饼，1.00\n");
        		printf(" 3. 茶鸡蛋，0.60\n");
        		printf(" 4. 鸡蛋饼，3.50\n");
        		printf(" 0. 选择结束\n");
        		printf("请输入选项：");
        		scanf("%d",&b);
        		if (b==0)
        		{
        			break;
				}
				switch (b)
				{
					case 1:
					printf("输入馄饨数量：");
					scanf("%d",&c);
					dadd=2.5*c;
					break;
        			case 2:printf("输入馅饼数量：");
					scanf("%d",&c);
					dadd=1.0*c;
					break;
        			case 3:printf("输入茶鸡蛋数量：");
					scanf("%d",&c);
					dadd=0.6*c;
					break;
        			case 4:printf("输入鸡蛋饼数量：");
					scanf("%d",&c);
					dadd=3.5*c;
					break;
        			default:continue;
				}
				charged+=dadd;
			}
			printf("夜宵合计：%.2f。\n",charged);
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
	printf("买了这么多美食才花了%.2f。\n",(chargeb+charged));
	return 0;
}
