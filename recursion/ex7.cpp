#include<bits/stdc++.h>
using namespace std;
/*
Tính tổng S(n) = 1/1 + 1/2 + 1/3 + ... + 1/n bằng đệ quy.

Constraints
1≤n≤1000;

Sample Input 0
18
Sample Output 0
3.495

*/
double dequy(int n){
	if(n==1) return 1;
	return (1.0/n) + dequy(n-1);
}
int main(){
	int n;
	double sum = 0;
	cin>>n;
	sum = dequy(n);
	cout<<fixed<<setprecision(3)<<sum;
}