#include <iostream>
#include <string>

using namespace std;

//Structures
struct Item {
	string name;
	int price;
};

//Global Variables
Item smoothies[15];
Item juices[15];

//Prototypes
void showMenu();
void selectItem(int);
int orderSmoothie();
int orderJuice();
int checkOut();

int main() {
	//Initialize Menu
	smoothies[0].name = "Strawberry Smoothie";
	smoothies[0].price = 5;
	smoothies[1].name = "Mango Smoothie";
	smoothies[1].price = 5;
	smoothies[2].name = "Banana Smoothie";
	smoothies[2].price = 5;
	smoothies[3].name = "Kiwi Smoothie";
	smoothies[3].price = 5;
	smoothies[4].name = "Coconut Smoothie";
	smoothies[4].price = 5;
	smoothies[5].name = "Pineapple Smoothie";
	smoothies[5].price = 5;
	smoothies[6].name = "Mixed Berry Smoothie";
	smoothies[6].price = 5;
	smoothies[7].name = "Green Tea Smoothie";
	smoothies[7].price = 5;
	smoothies[8].name = "Orange Smoothie";
	smoothies[8].price = 5;
	smoothies[9].name = "Carrot Smoothie";
	smoothies[9].price = 5;
	smoothies[10].name = "Papaya Smoothie";
	smoothies[10].price = 5;
	smoothies[11].name = "Apple Smoothie";
	smoothies[11].price = 5;
	smoothies[12].name = "Grape Smoothie";
	smoothies[12].price = 5;
	smoothies[13].name = "Melon Smoothie";
	smoothies[13].price = 5;
	smoothies[14].name = "Lemon Smoothie";
	smoothies[14].price = 5;
	
	juices[0].name = "Apple Juice";
	juices[0].price = 4;
	juices[1].name = "Orange Juice";
	juices[1].price = 4;
	juices[2].name = "Mango Juice";
	juices[2].price = 4;
	juices[3].name = "Pineapple Juice";
	juices[3].price = 4;
	juices[4].name = "Grape Juice";
	juices[4].price = 4;
	juices[5].name = "Kiwi Juice";
	juices[5].price = 4;
	juices[6].name = "Melon Juice";
	juices[6].price = 4;
	juices[7].name = "Carrot Juice";
	juices[7].price = 4;
	juices[8].name = "Cucumber Juice";
	juices[8].price = 4;
	juices[9].name = "Berry Punch";
	juices[9].price = 4;
	juices[10].name = "Beet Juice";
	juices[10].price = 4;
	juices[11].name = "Tomato Juice";
	juices[11].price = 4;
	juices[12].name = "Watermelon Juice";
	juices[12].price = 4;
	juices[13].name = "Coconut Water";
	juices[13].price = 4;
	juices[14].name = "Lemonade";
	juices[14].price = 4;
	
	//Show Menu
	showMenu();
	
	return 0;
}

void showMenu() {
	cout << "Welcome to the Smoothie and Juice Bar!" << endl;
	cout << "\nSmoothies" << endl;
	for(int i = 0; i < 15; i++) {
		cout << i+1 << ". " << smoothies[i].name << " - $" << smoothies[i].price << endl;
	}
	
	cout << "\nJuices" << endl;
	for(int i = 0; i < 15; i++) {
		cout << i+1 << ". " << juices[i].name << " - $" << juices[i].price << endl;
	}
	
	cout << "\nPlease select an item: ";
	int option;
	cin >> option;
	selectItem(option);
}

void selectItem(int option) {
	if(option <= 15) {
		cout << "\nYou have selected a " << smoothies[option-1].name << " for $" << smoothies[option-1].price << endl;
		orderSmoothie();
	}
	else if(option > 15) {
		cout << "\nYou have selected a " << juices[option-16].name << " for $" << juices[option-16].price << endl;
		orderJuice();
	}
	else {
		cout << "\nInvalid option. Please try again." << endl;
		showMenu();
	}
}

int orderSmoothie() {
	int quantity;
	
	cout << "\nHow many would you like? ";
	cin >> quantity;
	
	int cost = smoothies[quantity-1].price * quantity;
	cout << "\nYour total cost is: $" << cost << endl;
	
	checkOut();
	
	return 0;
}

int orderJuice() {
	int quantity;
	
	cout << "\nHow many would you like? ";
	cin >> quantity;
	
	int cost = juices[quantity-1].price * quantity;
	cout << "\nYour total cost is: $" << cost << endl;
	
	checkOut();
	
	return 0;
}

int checkOut() {
	int payment;
	
	cout << "\nPlease enter the amount to pay: $";
	cin >> payment;
	
	int change = payment - cost;
	cout << "\nYour change is: $" << change << endl;
	
	cout << "\nThank you for visiting the Smoothie and Juice Bar!";
	
	return 0;
}