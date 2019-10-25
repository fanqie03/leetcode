#include <iostream>
#include <string>
using namespace std;

int reverse(int x){
    int max = 0x7fffffff, min=0x80000000;
    long r=0;
    for(;x!=0;r*=10, r+=x%10,x/=10);
    return (r > max || r < min) ? 0 : r;
}

int reverse2(int x)
{
    int max = 0x7fffffff, min = 0x80000000;//int的最大值最小值
    long rs = 0;//用long类型判断溢出
    for(;x;rs = rs*10+x%10,x/=10);//逆序，正负通吃，不用单独考虑负值
    return rs>max||rs<min?0:rs;//超了最大值低于最小值就返回0
}

int main()
{
    std::cout << "Hello World" << endl;
    int i = 1<<32 - 1;
    int max = 0x7fffffff;
    int min = 0x80000000;
    string s = to_string(i);
    // cout<<i<<endl;
    cout<<max<<endl;
    cout<<min<<endl;
    cout<<reverse(2147483647)<<endl;
    cout<<reverse(-2147483648)<<endl;
    cout<<reverse(-1234)<<endl;
    cout<<reverse(123)<<endl;
    cout<<reverse(-123)<<endl;
    cout<<reverse(-1)<<endl;
    cout<<reverse(0)<<endl;
    cout<<reverse(1)<<endl;

    cout<<reverse2(2147483647)<<endl;
    cout<<reverse2(-2147483648)<<endl;
    cout<<reverse2(-1234)<<endl;
    cout<<reverse2(123)<<endl;
    cout<<reverse2(-123)<<endl;
    cout<<reverse2(-1)<<endl;
    cout<<reverse2(0)<<endl;
    cout<<reverse2(1)<<endl;

    return 0;
}