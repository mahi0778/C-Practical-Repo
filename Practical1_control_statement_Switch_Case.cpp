#include <iostream>
using namespace std;

int main(){
	int a, b;
	char n;
	cout << "Enter Two numbers : ";
	cin >> a >> b;
	cout << "Enter Operation (+ , -, *, /) : ";
	cin >> n;
	
	switch (n) {
		case '+' :
			cout << a + b;
			break;
		
		case '-' :
			cout << a - b;
			break;
		
		case '*' :
			cout << a * b;
			break;
			
		case '/' :
			cout << a / b;
			break;
		default :
			cout << "You Entered wrong Operation";
}
	return 0;
}

