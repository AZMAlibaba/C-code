#include <iostream>

using namespace std;
/*
    ����������ʹ��
    �����ص㣺�����  ���Ҿ������ã����˵������ �������ᵱ��ͨ�����Դ�������������������
    �������ݲ���ʱ�Ǵ��ݵ�ֵ ��������괫������
*/

//��Բ�����
inline double SQUARE(double x){return x*x;}
int main()
{
    double s,x;
    cin>>x;
    s=SQUARE(x/2+x/2);
    cout<<s<<endl;
    return 0;
}
