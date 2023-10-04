#include<bits/stdc++.h>
using namespace std;
 /*
  Tính giai thừa
  Constraints
	1≤n≤15
  Sample Input 0
  5
  Sample Output 0
  120
 */
int main(){
	int n;
	cin>>n;
	long long fac = 1;
	for(int i = 1;  i <=n ; i++){
		fac*=i;
	}
	cout<<fac;
}