// 读取三个整数并按升序对它们进行排序。
// 输入格式
// 共一行，包含三个整数。
// 输出格式
// 首先，将三个整数按升序顺序输出，每行输出一个整数。
// 然后，输出一个空行。
// 紧接着，将三个整数按原输入顺序输出，每行输出一个整数。
// 数据范围
// -100<输入整数<100
// 输入样例:
// 7 21 -14
// 输出样例:
// -14
// 7
// 21

// 7
// 21
//-14


#include <iostream>
using namespace std;
int main()
{
	int a = 0,b = 0,c = 0,x = 0,d = 0,z = 0;
	cin>>a>>b>>c;
	if (a <= b && a <= c)
		x = a;
	else if (b <= a && b <= c)
		x = b;
	else
		x = c;
	if (a >= b && a >= c)
		d = a;																
	else if (b >= a && b >= c)
		d = b;
	else
		d = c;
	z = a + b + c - x - d;
	cout<<x<<endl;
	cout<<z<<endl;
	cout<<d<<endl;
	cout<<" "<<endl;
	cout<<a<<endl;
	cout<<b<<endl;
	cout<<c<<endl;
	return 0;
 } 
