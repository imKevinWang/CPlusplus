// 读取三个浮点数AB和C并验证是否可以用它们形成三角形。
// 如果可能，则计算并输出三角形的周长:
// Perimetro = xx.x

// 如果不可能，则计算并输出以A和B为底以C为高的梯形面积:
// Area = xx.x

// 输入格式
// 共一行，包含三个浮点数ABC。

// 输出格式
// 按题目描述格式，输出答案，答案保留一位小数。

// 数据范围
// 0<A，B，C<100.0

// 输入样例1:
// 6.0 4.0 2.0

// 输出样例1:
// Area = 10.0

#include <iostream>
using namespace std;
int main()
{
    double A = 0, B = 0, C = 0, d = 0, L = 0, S = 0;
    cin>>A>>B>>C;
    {
        L = A + B + C;
        cout<<"Perimetro"<<"=";
        printf("%.1lf",L);
    }  
    else
    if (A<=C && B<=C && A+B>C || B<=A && C<=A && B+C>A || A<=B && C<=B && A+C>B)
    {
        S = (A + B) * C / 2;
        cout<<"Area"<<"=";
        printf("%.1lf",S);
    }
    return 0;
}
