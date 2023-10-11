#include<bits/stdc++.h>
using namespace std;
/*
Tính n giai thừa bằng đệ quy.

Constraints
0≤n≤10;

Sample Input 0
6
Sample Output 0
720
*/
long long dequy(int n){
	if(n==0) return 1;
	return n * dequy(n-1);
}
int main(){
	int n;
	long long sum = 1;
	cin>>n;
	sum = dequy(n);
	cout<<sum;
}