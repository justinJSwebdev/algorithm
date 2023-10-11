#include<bits/stdc++.h>
using namespace std;

/*
Constraints
0=n=10^18
Sample Input 0
123456

Sample Output 0
12
9

*/

int sumEvenRecursion(long long n, int sum){
	if(n==0) return sum;
	int sodu = n%10;
	if(sodu % 2 == 0){
		sum+=sodu;
	}
	return sumEvenRecursion(n/10,sum);
}


int sumOddRecursion(long long n, int sum){
	if(n==0) return sum;
	int sodu = n%10;
	if(sodu % 2 != 0){
		sum+=sodu;
	}
	return sumOddRecursion(n/10,sum);
}


int main(){
	long long n, even = 0, odd = 0;
	cin>>n;
	even = sumEvenRecursion(n,0);
	odd =  sumOddRecursion(n, 0);
	cout<<even<<endl<<odd;
}