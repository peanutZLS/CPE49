#include<bits/stdc++.h>
using namespace std;

void cal( long long n ){
  if( n == 0 ) return;

  if( n/10000000 != 0 ){
   cal( n/10000000 );
    printf( " kuti" );
    n %= 10000000;
  }

  if( n/100000 !=0){
    cal( n/100000 );
    printf( " lakh" );
    n %= 100000;
  }

  if( n/1000 !=0 ){
    cal( n/1000 );
    printf( " hajar" );
    
    n %= 1000;
  }

  if( n/100 !=0 ){
    cal( n/100 );
    printf( " shata" );
    n %= 100;
  }

  if( n !=0 ) printf( " %lld", n );
}

int main(){
  long long n;
  int num = 1;
  while(cin >> n  ){
    printf( "%4d.", num );
    if( n ) {cal( n );}
    else printf( " 0" );
    printf( "\n" );
    num++;
  }
  return 0;
}