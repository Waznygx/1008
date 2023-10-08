#include<stdio.h>
//int main()
//{
//	printf("file:%s line:%d\n", __FILE__, __LINE__);
//	return 0;
//}
////输出：file:C:\Users\张艺兴的圈外女友\source\repos\lianxi\1008\main.c line:4

//#define MAX 1000
//#define reg register          //为 register这个关键字，创建一个简短的名字
//#define do_forever for(;;)     //用更形象的符号来替换一种实现
//#define CASE break;case        //在写case语句的时候自动把 break写上。

//#define CHENG(x) ((x)*(x))
//int main()
//{
//	int ret = CHENG(5 - 1);
//	printf("%d\n", ret);
//	return 0;
//}
////输出：-1

//#define PRINT(x) (printf("the num of"x"is %d\n",x))//报错，无法运行
//#define PRINT(x) (printf("the num of "#x" is %d\n",x))
//#define PRINT(x,FORMAT) (printf("the num of " #x " is "  FORMAT "\n",x))
//int main()
//{
//	int a = 10;
//	int b = 20;
//	char c[] = "ch";
//	double d = 3.14;
//	PRINT(a, "%d");
//	PRINT(b, "%d");
//	PRINT(c, "%s");
//	PRINT(d, "%lf");
//	return 0;
//}
////输出：
//
////int main()
////{
////	printf("hello world\n");
////	printf("hello"" world\n");
////	return 0;
////}
//////输出：hello world
//////hello world

//#define ADD_TO_SUM(num, value) sum##num += value;
//int main()
//{
//	int sum5 = 22;
//	int ret = ADD_TO_SUM(5, 10);//作用是：给sum5增加1
//	printf("%d\n", ret);
//	return 0;
//}

//#define MAX(a, b) ( (a) > (b) ? (a) : (b) )
////      MAX(5++,8++) 
////                ((6++)>(9++) ? ():(10++))
//int main()
//{
//	int x = 5;
//	int y = 8;
//	int z = MAX(x++, y++);
//	printf("x=%d y=%d z=%d\n", x, y, z);
//	return 0;
//}
////输出：x=6 y=10 z=9


//#define M 100
//int main()
//{
//	int a = M;
//	//printf("%d", M);
//#undef M
//	printf("%d", M);
//	return 0;
//}

//int main()
//{
//#ifndef heihei
//	printf("heihei1\n");
//#endif // heihie
//	return 0;
//}

//#define haha
int main()
{
#if !defined heihei
	printf("heihei2\n");
#endif
	return 0;
}