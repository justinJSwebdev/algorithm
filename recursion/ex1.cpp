#include<bits/stdc++.h>
using namespace std;
/*
Tính tổng hàm S(n) = 1 + 2 + 3 + 4 + .. + n bằng đệ quy. Nếu bạn chưa biết thì S(n) có thể tính nhanh bằng công thức S(n) = n * (n + 1) / 2

0≤n≤1000; 
Sample Input 0
773
Sample Output 0
299151
*/
int dequy(int n){
	if(n==0) return 0;
	return n + dequy(n-1);
}
int main(){
	int n, sum = 0;
	cin>>n; 
	sum = dequy(n);
	cout<<sum;
}