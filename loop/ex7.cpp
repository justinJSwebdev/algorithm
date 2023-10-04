#include<bits/stdc++.h>
/*
Tổng bội 2
Nhập vào n nguyên dương không quá 10^6, tính và in tổng sau ra màn hình S=2+4+6+8+.....+2*n
Constraints
1≤n≤10^6
Sample Input 0
4
Sample Output 0
20
*/
using namespace std;
int main(){
	int n;
	cin>>n;
	long long sum = 0;
	for(int i = 1; i <= n ; i++){
		sum+=i*2;
	}
	cout<<sum;
}