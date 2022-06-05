#include <iostream>
#include <time.h>
using namespace std;
clock_t start, stop;
double duration;
int main()
{
    start = clock();

    stop = clock();

    duration = ((double)(stop - start)) / CLK_TCK;
    // to do
}