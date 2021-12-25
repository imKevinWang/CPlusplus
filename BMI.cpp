// BMI指数是国际上常用的衡量人体胖瘦程度的一个标准，其算法是m/h²(40<m<1201.4<h<20)，其中m是指体重(千克)，h是指身高(米)。不同体型范围与判定结果如下:
// 小于185:体重过轻，输出Underweight;大于等于185且小于24正常体重，输出Normal;大于等于24: 肥胖，不仅要输出BMI值(使用cout的默认精度)，然后换行，还要输出Overweight。
// 问题描述

// 现在给出体重和身高数据，需要根据BMI指数判断体型状态并输出对应的判断。
// 对于非C++语言，在输出时，请四舍五入保留六位有效数字输出，如果小数部分存在后缀0，不要输出后缀0。
// 请注意，保留六位有效数字不是保留六位小数。例如1145149应该输出为114.515，919810应该输出为9198.1。
// 输入格式共一行。
// 第一行，共2个浮点数，m, h分别表示体重(单位为kg)和身高(单位为m)。
// 输入
// 70 1.72

// 输出
// Normal


#include <iostream>
using namespace std;
int main()
{
  double m = 0, h = 0, BMI = 0;
  cin>>m>>h;
  BMI = m / (h * h);
  if (BMI < 18.5)
    cout<<"Underweight";
  else if (BMI <= 24 && BMI >= 18.5)
    cout<<"Normal";
  else
  {
    cout<<BMI<<endl;
    cout<<"Overweight";
  }
  return 0;
}
