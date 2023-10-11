#include<bits/stdc++.h>
using namespace std;
/*

Cho 2 số a và b, hãy tính ước chung lớn nhất và bội chung nhỏ nhất của 2 số a và b. Trong đó hàm UCLN sử dụng đệ quy để tính.
Constraints
1≤a,b≤10^12;

Sample Input 0
10 20
Sample Output 0
10 20
*/
long long  uclnRecur(long long  a, long long  b){
	if(b==0) return a;
	return uclnRecur(b,a%b);
}
int main(){
	long long a,b, ucln;
	cin>>a>>b;
	ucln = uclnRecur(a,b);
	cout<<ucln<<" "<<1ll*(a/ucln)*b;
}