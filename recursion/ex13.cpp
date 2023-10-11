#include<bits/stdc++.h>
using namespace std;
/*
Chữ số lớn nhất và nhỏ nhất
Cho một số nguyên không âm N, hãy in ra chữ số lớn nhất và chữ số nhỏ nhất của N. Viết 2 hàm đệ quy
Constraints
10≤n≤10^18

Sample Input 0
1256782

Sample Output 0
8 1
*/
int maxRecur(long long n, int max){
	if(!n) return max;
	max = fmax(n%10, max);
	return maxRecur(n/10,max);
}

int minRecur(long long n, int min){
	if(!n) return min;
	min = fmin(n%10,min);
	return minRecur(n/10,min);
}

int main(){
	
	long long n, max = -1 , min = 10;
	cin>>n;
	max = maxRecur(n,max);
	min = minRecur(n,min);
	cout<<max<<" "<<min<<endl;
}