#include<bits/stdc++.h>
using namespace std;
/*
Chuyển hệ thập phân sang hệ nhị phân

Constraints
0≤n≤10^18

Sample Input 0
8

Sample Output 0
1000
*/
void dequy(long long  n){
	if(n!=0){
	dequy(n/2);
	cout<<n%2;	
}
}
int main(){
	long long  n;
	cin>>n;
	if(n==0) cout<<0;
	dequy(n);
}