#include<bits/stdc++.h>
using namespace std;
/*
Nhập vào n nguyên dương không qua 10^6, tính và in tổng sau ra màn hình. S=1+3+5+7+.....+2*n-1
Constraints
1≤n≤10^6
Sample Input 0
4
Sample Output 0
16
*/
int main(){
	int n;
	cin>>n;
	long long sum = 0;
	for(int i = 1; i <= 2*n-1 ; i+=2){
		sum+= i;
	}
	cout<<sum;
}