#include<bits/stdc++.h>
using namespace std;
/*
Chuyển hệ thập phân sang hệ 16.
Cho một số nguyên không âm N, hãy in ra dạng biểu diễn của N dưới hệ 16.

Sample Input 0
995

Sample Output 0
3E3

*/
void recur16(long long n){
	if(n == 0) return;
	if(n < 16){
		if(n<=9){
			cout<<n;
		}else{
			cout<<char(n+55);
		}
	}else{
		int sodu = n%16;
		recur16(n/16);
		if(sodu <=9){
			cout<<sodu;
		}else{
			cout<<char(sodu+55);
		}
	}
	
}
int main(){
	long long n;
	cin>>n;
	if(n==0) cout<<0;
	recur16(n);
}