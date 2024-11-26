#include <iostream>

using namespace std;

int main()
{
    int i;
    double proz;
    proz=1;
    for(i=3;i<=30;i++)
        if(i%5!=0) proz=proz*i;
    cout<< proz;
    return 0;
}
