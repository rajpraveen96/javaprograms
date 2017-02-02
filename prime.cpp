#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n1,n2,i,j,cnt;
	cin>>n1;
	cin>>n2;
	for(i=n1;i<n2;i++)
	{
	   cnt=0;
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				cnt++;
				break;
			}
		}
		if(cnt==0)
		{
			cout<<i<<" " ;
		}
	}
	return 0;
}