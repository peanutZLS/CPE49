/*
N%M 小者前 大者後
餘數同 奇數前 偶數後
皆為奇 大奇前 小奇後
皆為偶 小偶前 大偶後
*/
#include <iostream>
#include <algorithm>
using namespace std;
int n,m;
int isOdd(int num){
 num = abs(num%2);//餘數可能為負
 return num;
}
bool cmp(int a, int b){
 if(a%m != b%m)return a%m < b%m; //N%M 小者前 大者後
 if(isOdd(a) != isOdd(b)) return isOdd(a); //餘數同 奇數前 偶數後
 if(isOdd(a))return a > b; //皆為奇 大奇前 小奇後
 return a < b; //剩餘情況:皆為偶 小偶前 大偶後
}
int main (){
 int a[10001];
 while(cin >> n >> m){
 cout<<n<<" "<<m<<endl;
 for(int i=0; i<n ; i++)cin>>a[i];
 sort(a,a+n,cmp);
 for(int i=0; i<n ; i++)cout<<a[i]<<endl;
 }
 }