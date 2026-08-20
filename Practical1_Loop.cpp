#include <iostream>
using namespace std;

int main(){
	int n;
	cout << "Enter value of n : ";
	cin >> n;
	int total = 0;
	int i;
	// Using For loop
	for (i = 1; i <= n ; i++){
		total = total + i;
	}
	cout << "The sum of first N natural number by for loop is : "<< total <<"\n";
	//Using While Loop
	int j = 1;
	int total2;
	while(j <= n)
	{
		total2 = total2 + j;
		j++;
	}
	cout << "Sum of N natural numbers by while loop is : " << total2 << "\n";
	//Using Do While Loop 
	int k = 1;
	int total3 = 0;
	do
	{
		total3 = total3 + k;
		k++;
	}
	while (k <= n);
	cout << "Sum of N natural numbers by Do-while loop is : " << total3;
	
	return 0;
}

