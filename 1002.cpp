#include<iostream>
using namespace std;

float num[1001],coe;
int main()
{
    int k,exp,cnt=0;
    string output;
    char buf[50];
    for(int i=0;i<2;i++)
    {
        cin>>k;
        for(int j=0;j<k;j++)
        {
            cin>>exp>>coe;
            num[exp]+=coe;
        }
    }
    for(int i=1000;i>=0;i--)
    {
        if(num[i]!=0)
        {
            cnt+=sprintf(buf," %d %.1f",i,num[i])/6;
            output+=buf;
        }
    }
    cout<<cnt<<output;
    return 0;
}
//定义一个长度为1001的数组，将读取的值加到数组上，以字符串形式输出数组