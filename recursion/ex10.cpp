#include<bits/stdc++.h>
using namespace std;
/*
Cho một số nguyên không âm N, hãy tính tổng chữ số của N sử dụng kỹ thuật đệ quy.

Constraints
0≤n≤10^18

Sample Input 0
123456789

Sample Output 0
45

*/

long long dequy(long long n){
	if(n==0) return 0;
	return n%10 + dequy(n/10);
}

int main(){
	long long n, sum = 0;
	cin>>n;
	sum = dequy(n);
	cout<<sum;
}