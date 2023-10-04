#include<bits/stdc++.h>
using namespace std;
/*

Liệt kê các số chính phương dương và không vượt quá n

Ví dụ N = 20 => 1, 4, 9, 16

Constraints
1≤N≤10^10.

Tính tổng ước của số nguyên dương n. Bài này duyệt từ 1 tới n sẽ bị quá thời gian cho phép. 

Sample Input 0

50
Sample Output 0

1 4 9 16 25 36 49
*/
	int main(){
		long long n;
		cin>>n;
		for(int i = 1 ; i <= sqrt(n); i++){
			cout<<1ll*i*i<<" ";
		}
	}