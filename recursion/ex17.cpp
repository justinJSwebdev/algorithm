#include<bits/stdc++.h>
using namespace std;

int stepRecur(long long n, int count){
    if(n==1){
        return count;
    }
    count++;
    if(n>3 && n%3==0){
        return stepRecur(n/3, count);
    }else if(n > 2 && n%2==0){
        return stepRecur(n/2, count);
    }else{
    return stepRecur(n-1, count);
	}
}
	
int main(){
    long long n;
    cin>>n;
    int count = stepRecur(n,0);
    cout<<count; 
}