#include<bits/stdc++.h>
using namespace std;
/*
Tính tổng hàm S(n) = -1 + 2 -3 + 4 - 5 + 6 + ... + (-1)^n * n bằng đệ quy. 
Nếu bạn chưa biết thì S(n) có thể tính nhanh bằng công thức Nếu N chẵn thì S(n) = n / 2, còn nếu N lẻ thì S(n) = (n - 1) / 2 - n
Constraints

1≤n≤10^3; Chú ý các bạn phải code bằng đệ quy nhé.

Sample Input 0
919

Sample Output 0
-460
*/
int dequy(int n){
	if(n==0) return 0;
	if(n%2!=0) return n*(-1) + dequy(n-1);
	else return n + dequy(n-1);
}
int main(){
	int n,sum =0;
	cin>>n;
	sum = dequy(n);
	cout<<sum;
}