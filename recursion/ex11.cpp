#include<bits/stdc++.h>
using namespace std;

/*
Cho một số nguyên không âm N, hãy đếm số lượng chữ số của N.
Constraints
0≤n≤10^18

Sample Input 0
123452

Sample Output 0
6

*/
int countRecurcharacter(long long n, int count){
	if(n==0) return count;
	count+=1;
	return countRecurcharacter(n/10, count);
}

int main(){
	long long n;
	cin>>n;	
	int sum = 0;
	if(n==0){
		cout<<1;
	}else{
	sum = countRecurcharacter(n,0);
	cout<<sum;	
	}
}