#include <iostream>
#include<string>
using namespace std;

class Store {
	public:
	string item_name;
	int price;
	float discount;
};
int main(){
	Store Item1;
	Item1.item_name = "Pencil";
	Item1.price = 5;
	Item1.discount = 4.99;
	
	cout << "The Item is : " << Item1.item_name << "\n";
	cout << "The Price is : " << Item1.price << "\n";
	cout << "The discount is : " << Item1.discount;
	return 0;
}

