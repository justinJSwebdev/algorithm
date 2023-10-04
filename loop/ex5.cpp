#include<bits/stdc++.h>
using namespace std;
//	Kiểm tra số 2022
/*
Nhập vào 1 dãy số có không quá 10000 số nguyên. Hãy xác định trong quá trình nhập có xuất hiện số 2022 hay không?
Constraints

1≤N≤10000; Các số được nhập là số nguyên không quá 10^6.

Output Format

In YES nếu trong các số vừa nhập có số 2022, ngược lại in NO

Sample Input 0

4
2019 2020 2021 2022
Sample Output 0

YES

*/
int main(){
	long long n;
	cin>>n;
	bool check = false;
	for(int i = 0 ; i < n; i++){
		int tmp;
		cin>>tmp;
		if(tmp == 2022){
			check = true;
		}
	}
	if(check) cout<<"YES";
	else cout<<"NO";
}