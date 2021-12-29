// 读取4个整数值ABC和D。
// 如果四个整数同时满足以下条件:
// 1B大于C。2D大于A。
// 3C和D的总和大于A和B的总和。4C和D是正值。
// 5.A是偶数。
// 则输出Valores aceitos，否则，输出valores nao aceitos。
// 输入格式
// 输入占一行，包含四个整数ABCD。
// 输出格式
// 如果输入数值满足题目条件则输出Valores aceitos ，否则输出Valores nao aceitos .
// 数据范围
// -100<A,B,C,D<100
// 输入样例:
// 5678
// 输出样例:
// Valores nao aceitos

#include <iostream>
using namespace std;
int main()
{
	int A = 0,B = 0,C = 0,D = 0,a = 0,b = 0;
	cin>>A>>B>>C>>D;
	a = C + D;
	b = A + B;
	if (B > C && D > A && a > b && C > 0 && D > 0 && A % 2 == 0)
		cout<<"Valores aceitos";
	else
		cout<<"Valores nao aceitos";
	return 0;
}
