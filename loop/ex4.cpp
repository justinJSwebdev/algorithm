#include<bits/stdc++.h>
using namespace std;
/*
	Tích các ước
Constraints

1≤N≤1000

Output Format

Tích các ước số của N

Sample Input 0
10
Sample Output 0
100
*/
int main(){
	int n;
	long long tich = 1;
	cin>>n;
	for(int i = 1 ; i <= sqrt(n); i++){
		if(n%i==0){
			tich*=i;
			if(n/i!=i){
				tich*=n/i;
			}
		}
	}
	cout<<tich;
}