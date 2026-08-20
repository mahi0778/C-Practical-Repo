#include<iostream>
using namespace std;

int main (){
	int n;
	cout << "Enter the value of n : ";
	cin >> n;
	
	int i,j;
	for(i = 1 ; i <= n ; i++){
		int count = 0;
		for(j = 1 ; j <= i ; j++){
			if(i % j == 0){
				count = count + 1;
			}
		}
		if(count == 2){
			cout << i << ",";
		}
	}
	return 0;
}
