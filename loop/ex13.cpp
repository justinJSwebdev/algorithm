#include<bits/stdc++.h>
using namespace std;
/*
 Cứ 3 vỏ chai bia sẽ được đổi một chai bia mới. Biết rằng  mỗi
chai bia có giá 28 xu, nhiệm vụ của bạn là xác định với N xu cho trước, bạn có thể mua được tối đa bao nhiêu
chai bia tính cả việc đổi thưởng bằng vỏ chai?
Constraints

1<=N<=10^6

Output Format

In ra số lượng chai bia tối đa có thể mua
Sample Input 0
138

Sample Output 0
5
*/
int main(){
	long long n;
	cin>>n;
	long long sochai = n / 28;
	long long  sochaiTemp = sochai;
	while(sochaiTemp >= 3){
		int change = sochaiTemp / 3;
		sochai += change;
		sochaiTemp =  sochaiTemp%3 + change;
	}
	cout<<sochai;
}