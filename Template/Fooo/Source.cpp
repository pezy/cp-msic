#include <iostream>
using std::cout;
using std::endl;

template<typename T, typename... args>
void print(const T &t, const args&... rest)
{
    auto m = sizeof...(args);//���Դ���,m��������3.����ÿ�μ�1
    if (!sizeof...(args))//������Ϊ��
    {
        cout << t << endl;//û�зָ���
        return;
    }
    cout << t << ", ";
    //print(rest...);
}

int main()
{
    print(1);
}