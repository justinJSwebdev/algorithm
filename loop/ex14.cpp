#include<bits/stdc++.h>
using namespace std;
/*
Cho một số nguyên dương n, hãy biểu diễn n dưới dạng tổng của các số nguyên tố sao cho số lượng số hạng trong tổng là lớn nhất có thể.

note(so luong so hang lon nhat co the chi la so 2)

Output Format
Dòng đầu tiên in ra số lượng số hạng trong tổng. Nếu không thể biểu diễn n dưới dạng tổng các số nguyên tố
thì in ra -1 cho dòng này và không cần in dòng 2. Dòng 2 in ra các số hạng trong tổng theo thứ tự tăng dần.


1<=N<=10^4
Sample Input 0
6

Sample Output 0
3
2 2 2 

Sample Input 1
1
Sample Output 1 
-1
*/

int main(){
	int n;
	cin>>n;
	if(n < 2){
		cout<<-1;
		return 0;
	}else{
		if(n/2==0){
			cout<<1<<endl;
			cout<<n/2;
			return 0;
		}else{
			cout<<n/2<<endl;
			if(n%2==0){
				for(int i = 0 ; i < n / 2;i++){
					cout<<2<<" ";
				}
			}else{
				for(int i = 0 ; i < n / 2 - 1; i++){
					cout<<2<<" ";
				}
				cout<<3;
			}
		}
	}
}