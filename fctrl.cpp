#include<stdio.h>
#include <iostream>
using namespace std;
#define ll long long

ll countf(ll num){
	ll co=0;
	ll five=5;
	ll quo=num;
	while(quo > 0){
		quo = num / five;
		co+=quo;
		five *= 5;
	}
	return co;
}

int main(){
	#ifndef ONLINE_JUDGE 
    // For getting input from input.txt file 
    freopen("input.txt", "r", stdin); 
    // Printing the Output to output.txt file 
    // freopen("output.txt", "w", stdout); 
	#endif 


	ll n;
	cin>>n;
	while(n--){
		ll num;
		cin>>num;
		cout << countf(num) << "\n";
	}



	return 0;
}
