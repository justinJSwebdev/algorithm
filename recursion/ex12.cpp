#include<bits/stdc++.h>
using namespace std;


/*
Cho một số nguyên không âm N, hãy in ra chữ số đầu tiên của N.

Constraints
0≤n≤10^18

Sample Input 0
56721

Sample Output 0
5

*/

int recurFirst(long long n){
	if(n < 10) return n;
	return recurFirst(n/10);
}

int main(){
	long long n;
	cin>>n;
	if(n==0){
		cout<<0;
	}else{
		int first = recurFirst(n);
		cout<<first;
	}
}