// 读取两个正整数值A和B。
// 如果其中一个是另一个的整数倍，则输出Sao Multiplos ，否则输出 Nao sao Multiplos。
// 输入格式
// 共一行，两个整数A和B。
// 输出格式
// 按题目所述，输出结果。
// 数据范围
// 0<AB<100
// 输入样例:
// 6 24
// 输出样例:
// Sao Multiplos

#include <iostream>
using namespace std;
int main()
{
	int A = 0,B = 0;
	cin>>A>>B;
	if (A % B == 0 || B % A == 0)
		cout<<"Sao Multiplos";
	else 
		cout<<"Nao Sao Multiplos";
	return 0;
}
