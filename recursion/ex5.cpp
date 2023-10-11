#include<bits/stdc++.h>
using namespace std;

long long recurFibbonacci(int n){
	if(n==1) return 0;
	if(n==2 || n ==3 ) return 1;
	cout<<"n-1:"<<n-1<<" n-2:"<<n-2;
	return recurFibbonacci(n-1) + recurFibbonacci(n-2);
}

int main(){
	int n;
	cin>>n;
	long long s = recurFibbonacci(n);
	cout<<s;
}