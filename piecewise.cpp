//  分段数
// 【问题描述】
//  编写程序，计算下列分段函数y=f(x)的值。 
//  y=-x+2.5;0<=x<5
//  y=2-1.5(x-3)(x-3);5<=x<10 
//  y=x/2-1.5;10<=x<20
//  输入:一个浮点数N 0<=N<20
//  输出:输出N对应的分段函数值:f(n)。结果保留到小数点后三位。
// 【样例输入】
//  1.0
//  样例输出:
//  1.500

#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	double N = 0,y = 0;
	scanf("%lf",&N);
	if (N > 0 && N < 5)
		y = -N +2.5;
	else if (N >= 5 && N < 10)
		y = 2 - 1.5*(N-3)*(N-3);
	else if (N>=10 && N<20)
		y = N / 2 -1.5;
	printf("%.3lf",y);
	return 0;
}
