#include <iostream>
using namespace std;

int main (){
	int n;
	cout << "Enter The number whoose factorial to be calculated : ";
	cin >> n;
	int i, fact = 1;
	for (i = 1; i <= n ; i++){
		fact = fact * i;
	}
	cout << "The factorial of " << n << " is  : " << fact;
	return 0;
}
