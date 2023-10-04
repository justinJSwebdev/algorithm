#include<bits/stdc++.h>
/*
Nhập vào n nguyên dương không quá 1000 và tính tổng sau, kết quả in ra màn hình. S=1^3+2^3+3^3+4^3+……+n^3.
Constraints

1≤n≤10^3
Sample Input 0
3
Sample Output 0
36

*/
using namespace std;
int main(){
	int n;
	cin>>n;
	long long sum = 0;
	for(int i = 1 ; i<=n ; i++){
		sum+= pow(i,3);
	}
	cout<<sum;
}