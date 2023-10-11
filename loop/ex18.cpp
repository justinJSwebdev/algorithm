#include<bits/stdc++.h>
using namespace std;
/*
Ước chung lớn nhất của giai thừa
Constraints
0<=a,b<=10^12; 0<=min(a, b)<=12

Sample Input 0
2 5
Sample Output 0
2
*/
int main(){
	long long a,b;
	cin>>a>>b;
	long long min = fmin(a,b);
	long long tich = 1;
	for(int i = 1 ; i <= min ; i++){
		tich*=i;
	}
	cout<<tich;
}