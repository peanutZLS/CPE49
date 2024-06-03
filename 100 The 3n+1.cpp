#include <iostream>
using namespace std;

int main()
{
	int i,j;
	while(cin>>i>>j)//輸入測資 
	{
		int count,ans=0,temp;
		
		cout<<i<<" "<<j<<" ";//輸出 
		
		if(j<i)//i大於j兩者交換 
		{
			temp=i;
			i=j;
			j=temp;
			
		}
		
		for(int t=i;t<=j;t++)//t是要計算的數字 
		{
			int k=t;//k是拿來計算用的 
			count=1;//count用來計算有幾個數字產生 
					//k本身就算一個數字
			 
			while(k>1)//k等於1就停止 
			{
				if(k%2==0)//若k為偶數就除2 
				{
					k=k/2;
					count=count+1;//產生一個數字就計算一次 
				}
				else//k不為偶數就乘3加1 
				{
					k=3*k+1;
					count=count+1;//產生一個數字就計算一次 
				}
			}
			
			if(count>ans)//計算最多的數字就是答案 
			{
				ans=count;
			}
		}
		
		//輸出 
		cout<<ans<<endl;
	}
	return 0;
}