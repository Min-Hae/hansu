#include<iostream>
using namespace std;

int hansu(int x){
	if(x < 100)
		return x;
	else if(x <=1000){
		int count = 99;
		int carry2, carry, rest;
		int diff1, diff2;
		for(int i=100;i<=x;i++){
			int j =i;
			rest = j%10;
			carry = (j/10)%10;
			carry2 = j/100;
			diff1 = carry2 - carry;
			diff2 = carry- rest;
			if(diff1 == diff2)
				count++;
		}
		return count;
	}
}

int main(){
	int n, result;
	cin >> n;
	result = hansu(n);
	cout << result;
}


