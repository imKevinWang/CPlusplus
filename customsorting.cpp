// 【题目描述】
//    三个整数分别为ABC。这三个数字不会按照这样的顺序给你，但它们始终满足条件:A<B<C.为了看起来更加简洁明了，我们希望你可以按照给定的顺序重新排列它们。
// 【输入格式】
//    第一行包含三个正整数ABC，不一定是按这个顺序。这三个数字都小于或等于100。第二行包含三个大写字母AB和C(它们之间没有空格)表示所需的顺序。
// 【输出格式】
//    在一行中输出A，B和C，用一个(空格)隔开。
// 【输入输出样例】
//  输入 #1 
//    1 5 3  
//    ABC
//  输出 #1 
//    1 3 5
//  输入#2  
//    6 4 2 
//    CAB
//  输出 #2
//    6 2 4

#include <iostream>
using namespace std;
int main()
{
	int a = 0,b = 0,c = 0,x = 0,z = 0,d = 0;
	char p,e,f;
	cin>>a>>b>>c;
	cin>>p>>e>>f;
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
	if (p == 'A' && e == 'B' && f == 'C')
		cout<<x<<" "<<z<<" "<<d;
	else if (p == 'A' && e == 'C' && f == 'B')
		cout<<x<<" "<<d<<" "<<z;
	else if (p == 'B' && e == 'A' && f == 'C')
		cout<<z<<" "<<x<<" "<<d;
	else if (p == 'B' && e == 'C' && f == 'A')
		cout<<z<<" "<<d<<" "<<x;
	else if (p == 'C' && e == 'A' && f == 'B')
		cout<<d<<" "<<x<<" "<<z;
	else
		cout<<d<<" "<<z<<" "<<x;
	return 0;
}
