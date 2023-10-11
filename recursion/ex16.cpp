#include<bits/stdc++.h>
using namespace std;


/*
Cho số nguyên không âm N, hãy kiểm tra xem tất cả các chữ số của N có phải đều là số chẵn hay không?

Constraints
0≤n≤10^18
Output Format
In ra YES nếu n toàn chữ số chẵn, ngược lại in ra NO.

Sample Input 0
2280820
Sample Output 0
YES

*/
bool checkRecursion(long long n){
	int sodu = n%10;
	if(n==0) return true;
	if(sodu%2!=0) return false;
	return checkRecursion(n/10);	
}


int main(){
	long long n;
	cin>>n;
   	if(checkRecursion(n)){
   		cout<<"YES";
	}else{
		cout<<"NO";
	}
}