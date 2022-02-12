#include<stdio.h>
//int main()
//{
//	double w;//奖金总数
//	int I;//利润	
//	printf("请输入当年利润：");
//	scanf("%ld", &I);
//	int a = 100000;
//	if (I <= a)
//		w = a * 0.1;
//	else if (I <= 2 * a)
//		w = a * 0.1 + (I - a) * 0.075;
//	else
//		w = a * 0.1 + a * 0.075 + (I - 2 * a) * 0.05;
//	printf("奖金是：%10.2f\n", w);
//	return 0;
//
//}
//int main()
//{
	//int a, b, c; 
	//float I;
	//float W = 0;
	//a = 100000;
	//b = 200000;
	//c = 400000;
	//int T;
	//printf("请输入当年利润：");
	//scanf("%ld", &I);
	//T = I/ a;

	//switch (T)
	//{
	//	case2:
	//		W = I* 0.1 + a * 0.075 + (I - 2 * a) * 0.05;
	//		break;
	//	case1:
	//		W = I * 0.1 + (I - a) * 0.075;
	//		break;
	//	case0:
	//		W = I* 0.1;
	//		break;
	//}
	//printf("奖金是：%10.2f\n", W);
	/*long i;
	double  bon1, bon2, bon4, bon6, bon10; double bonus = 0;
	int branch;
	bon1 = 100000 * 0.1;
	bon2 = bon1 + 100000 * 0.075;
	bon4 = bon2 + 200000 * 0.05;
	printf("输入利润i：");
	scanf("%ld", &i);
	branch = i / 100000;
	if (branch > 10)
		branch = 10;
	switch(branch)
	{
	case0:bonus = i * 0.1;
		break;
	case1:bonus = bon1 + (i - 100000) * 0.075;
		break;
	case2:
	case3:bonus = bon2 + (i - 200000) * 0.05;
		break;
	case4:
	case5:bonus = bon4 + (i - 400000) * 0.03;
		break;
	case6:
	case7:
	case8:	
	case9:bonus = bon6 + (i - 600000) * 0.015;
		break;
	case10:bonus = bon10 + (i - 1000000) * 0.01;
	}
	printf("奖金是：%10.2f\n", bonus);
	return 0;
}*/