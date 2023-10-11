#include<bits/stdc++.h>
using namespace std;
/*
Nhập n là một số nguyên không quá 100. In ra các hình tương ứng, mỗi hình cách nhau một dòng trống.
Constraints
1≤n≤100

Sample Input 0
5

Sample Output 0
*****
*****
*****
*****
*****

*****
*   *
*   *
*   *
*****

*****
*###*
*###*
*###*
*****

1 1 1 1 1 
2       2 
3       3 
4       4 
5 5 5 5 5 
*/
int main(){
	int n;
	cin>>n;
	for(int i = 0 ; i < n; i++){
		for(int j = 0 ; j < n; j++){
			cout<<"*";
		}
		cout<<endl;
	}
	cout<<endl;
	for(int i = 0; i < n; i++){
		for(int j = 0 ; j < n; j++){
			if(i!=0 && i!=n-1){
				if(j!=0 && j != n-1){
					cout<<" ";
				}else{
					cout<<"*";
				}
			}else{
				cout<<"*";
			}
		}
		cout<<endl;
	}
	cout<<endl;
	for(int i = 0; i < n; i++){
		for(int j = 0 ; j < n; j++){
			if(i!=0 && i!=n-1){
				if(j!=0 && j != n-1){
					cout<<"#";
				}else{
					cout<<"*";
				}
			}else{
				cout<<"*";
			}
		}
		cout<<endl;
	}
	cout<<endl;
	for(int i = 0; i < n; i++){
		for(int j = 0 ; j < n; j++){
			if(i!=0 && i!=n-1){
				if(j!=0 && j != n-1){
					cout<<"  ";
				}else{
					cout<<i+1<<" ";
				}
			}else{
				cout<<i+1<<" ";
			}
		}
		cout<<endl;
	}
}