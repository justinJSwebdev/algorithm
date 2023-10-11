#include<bits/stdc++.h>
/*
Tính tổng hàm S(n) = 1^2 + 2^2 + 3^2 + 4^2 + .. + n^2 bằng đệ quy. Nếu bạn chưa biết thì S(n) có thể tính nhanh bằng công thức S(n) = n * (n + 1) * (2n + 1) / 6
Constraints

0≤n≤1000; Chú ý các bạn phải code bằng đệ quy nhé.

Sample Input 0
53

Sample Output 0
51039

*/
using namespace std;
long long dequy(int n){
	if(n==0) return 0;
	return pow(n,2) + dequy(n-1);
}
int main(){
	int n;
	long long sum = 0;
	cin>>n;
	sum =  dequy(n);
	cout<<sum;
}