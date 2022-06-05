#include <iostream>
#include <windows.h>　　　 //引入头文件
using namespace std;

int main()

{
    DWORD t1, t2;
    t1 = GetTickCount();
    // to do
    int i;
    for (i = 1; i <= 10000; i++)
    {
        printf("%d\n", i);
    }
      t2 = GetTickCount();
    cout<<"time = "<<((t2-t1)*1.0/1000)<<endl;  //输出时间（单位：ｓ）
}