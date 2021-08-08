#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int a,b,sum;
	vector<int> nums;
	cin>>a>>b;
	sum=a+b;
	if(sum<0)
	{
		cout<<'-';
		sum=0-sum;
	}
	if(sum==0)nums.push_back(0);
	while(sum!=0)
	{
		nums.push_back(sum%10);
		sum/=10;
	}
	for(int i=nums.size()-1;i>=0;i--)
	{
		cout<<nums[i];
		if(i%3==0&&i!=0)cout<<',';
	}
	return 0;
}
//首先将和逆序存入数组，然后从数组的最后开始输出，每输出三位输出一个逗号