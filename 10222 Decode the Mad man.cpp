#include <iostream>
#include <string>
using namespace std;

int main()
{
	string keyboard=" `1234567890-=qwertyuiop[]asdfghjkl;'zxcvbnm,./";//建立鍵盤的字串，從左按到右
	string value = "";
	while (getline(cin, value))
	{
		for (int i = 0; i < value.length(); i++) 
		{
			if(value[i] >= 'A' && value[i] <= 'Z')//大寫轉小寫
			{
				value[i]=value[i]+32;
			}
			
			for(int j = 0; j < keyboard.length(); j++)//比對字串
			{
				if(value[i] == keyboard[0])//空白不用轉換 
				{
					cout << " ";
					break;
				}
				
				else if(value[i]==keyboard[j])//輸出左邊兩個鍵盤的字 
				{
					cout<<keyboard[j-2];
					break;
				}
			}
		}
		cout<<endl; 
	}
	return 0;
}
