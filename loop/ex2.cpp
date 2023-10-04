#include<bits/stdc++.h>
using namespace std;
/*
 Liệt kê ước
Constraints

1≤N≤10^6

Sample Input 0

28
Sample Output 0

6
1 2 4 7 14 28

*/
int main(){
	int n, count = 0;
	cin>>n;
	for(int i = 1 ; i <= sqrt(n); i++){
		if(n%i==0){
			count++;
			if(n/i != i){
				count++;
			}
		}
	}
	cout<<count<<endl;
	for(int i = 1; i<=n;i++){
		if(n%i==0){
			cout<<i<<" ";
		}
	}
}