#include <iostream>
#include <windows.h>　　　 //引入头文件
using namespace std;

void printN(int N)
{
    if (N)
    {
        printN(N - 1);
        printf("%d\n", N);
    }
}

int main()
{
    DWORD t1, t2;
    t1 = GetTickCount();
    printN(1000000);
    t2 = GetTickCount();
    cout << "time = " << ((t2 - t1) * 1.0 / 1000) << endl; //输出时间（单位：ｓ）
}