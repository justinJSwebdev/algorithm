#include<bits/stdc++.h>
using namespace std;
/*
Vẽ hình 2
Nhập n là một số nguyên không quá 100. In ra các hình tương ứng, mỗi hình cách nhau một dòng trống.
Constraints
1≤n≤100

Sample Input 0
5

Sample Output 0
*
**
***
****
*****

*****
****
***
**
*

    *
   **
  ***
 ****
*****

*****
 ****
  ***
   **
    *

*
**
* *
*  *
*****
*/
int main(){
	int n;
	cin>>n;
	for(int i=0;i<=n;i++){
		for(int j = 0; j<i;j++){
			cout<<"*";
		}
		cout<<endl;
	}
	cout<<"\n";
	for(int i = 0; i < n;  i++){
		for(int j = 0; j < n - i; j++){
			cout<<"*";
		}
		cout<<endl;
	}
	cout<<"\n";
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(j<n-i-1){
				cout<<" ";
			}
			else{
				cout<<"*";
			}
		}
		cout<<endl;
	}
	cout<<"\n";
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(j > i-1){
				cout<<"*";
			}
			else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
	cout<<"\n";
	for(int i = 0 ; i < n; i++){
		for(int j = 0 ; j <= i; j++){
			if(i > 1 && i < n - 1){
				if(j==0 || j==i){
					cout<<"*";
				}else{
					cout<<" ";
				}
			}else{
				cout<<"*";
			}
		}
		cout<<endl;
	}
}

