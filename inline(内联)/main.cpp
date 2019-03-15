#include <iostream>

using namespace std;
/*
    对内联函数使用
    它的特点：语句少  而且经常调用，如果说语句多了 编译器会当普通函数对待而不再是内联函数了
    内联传递参数时是传递的值 而不是像宏传递那样
*/

//求圆的面积
inline double SQUARE(double x){return x*x;}
int main()
{
    double s,x;
    cin>>x;
    s=SQUARE(x/2+x/2);
    cout<<s<<endl;
    return 0;
}
