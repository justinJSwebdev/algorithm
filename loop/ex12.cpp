#include<bits/stdc++.h>
using namespace std;
/*
Nhập vào n nguyên. Đếm số lượng chữ số của n là số nguyên tố.

Constraints
0≤n≤10^18

Sample Input 0
1222333999888

Sample Output 0
6

*/
bool checkNT(int n){
	for(int i = 2 ; i <= sqrt(n);i++){
		if(n%i==0)
		return false;
	}
	return n > 1;
}
int main(){
	long long n;
	cin>>n;
	int count = 0;
	while(n){
		int digit = n%10;
		if(checkNT(digit)){
			count++;
		}
		n/=10;
	}
	cout<<count;
}