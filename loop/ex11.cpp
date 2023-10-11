#include<bits/stdc++.h>
using namespace std;
/*
Đếm số lượng chữ số của N
Constraints

0≤n≤10^18

Output Format

Số lượng chữ số của n

Sample Input 0
123456789

Sample Output 0
9
*/
int main(){
	long long n;
	cin>>n;
	int dem = 0;
	if(n == 0){
		dem = 1;
		cout<<dem;
		return 0;
	}
	while(n){
		n = n/10;
		dem++;
	}
	cout<<dem;
}