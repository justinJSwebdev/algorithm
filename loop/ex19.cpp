#include<bits/stdc++.h>
/*
Cho số nguyên dương N, bạn hãy tính tổng : S(N) = 1/0! + 1/1! + 1/2! + 1/3! +... + 1/(N - 1)!. Trong đó ! là kí hiệu của giai thừa
Constraints

2<=N<=15
Sample Input 0
4
Sample Output 0
2.6667
*/
using namespace std;

int main(){
	int n;
	cin>>n;
	float sum = 0;
	int gt = 1;
	for(int i = 1 ; i <=n; i++){
		sum+= 1/gt;
		gt*=i;
	}
	cout<<fixed<<setprecision(4)<<sum;
}