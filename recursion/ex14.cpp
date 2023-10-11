#include<bits/stdc++.h>
using namespace std;
/*
Cho một số nguyên không âm N, hãy in ra N theo thứ tự các chữ số từ trái qua phải và từ phải qua trái. Chú ý phải sử dụng hàm đệ quy cho cả 2 yêu cầu.

Constraints
0≤n≤10^18

Sample Input 0

21218

Sample Output 0
2 1 2 1 8 
8 1 2 1 2 
*/
void reverseRecur(long long n){
	if(n < 10){
		cout<<n;	
	}else{
	 cout<<n%10<<" ";
	 reverseRecur(n/10);
	}
}

void straightRecur(long long n){
	if(n > 0){

		int temp = n%10;
	 straightRecur(n/10);
		cout<<temp<<" ";
	}
}
int main(){
	long long n;
	cin>>n;
	straightRecur(n);
	cout<<endl;
	reverseRecur(n);
}
	
