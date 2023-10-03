#include<bits/stdc++.h>
using namespace std;
/*

Constraints
1≤N≤10^10.

Tính tổng ước của số nguyên dương n. Bài này duyệt từ 1 tới n sẽ bị quá thời gian cho phép. 

- Sample Input 0
28

-Sample Output 0
56

*/
	int main(){
		long long n, sum = 0;
		cin>>n;
		for(int i = 1 ; i <= sqrt(n); i++){
			if(n%i==0){
				sum+= i;
				if(n/i != i ){
					sum += n /i;
				}
			}
		}
		cout<<sum;
	}