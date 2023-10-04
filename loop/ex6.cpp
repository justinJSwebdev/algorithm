#include<bits/stdc++.h>
/*
Tổng chẵn lẻ
Tính tổng : S= -1 + 2 - 3 + 4 - 5 + ...... + (-1)^n*n
Constraints
1≤n≤10^6
Sample Input 0
6
Sample Output 0
3

*/
using namespace std;
int main(){
	int n;
	cin>>n;
	long long sum = 0;
	for(int i=1; i <= n; i++){
		if(i%2!=0){
			sum+= i*-1;
		}else{
			sum+=i;
	}
}
cout<<sum;
}