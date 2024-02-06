#include<iostream> 
using namespace std; 
int main() {

	string shopping[] = { "Bread", "strawberries", "Ceral", "Chips", " "}; //Make an array

	shopping[0] = "Bread";
	shopping[1] = "strawberries";
	shopping[2] = "Ceral";
	shopping[3] = "Chips";

	//Add milk to the end of array
	shopping[4] = "milk";

	//Replace bread with Potatoes
	shopping[0] = "Potatoes";

	//Print the 3rd item in the array
	cout << shopping[2] << endl;

	//using a for loop and an if statement, check if "strawberries" is on the list
	for (int i = 0; i < 4; i++) {
		if (shopping[i] == "strawberries")
			cout << "found the strawberries" << endl;

	}

	//Print the whole list
	for (int i = 0; i < 5; i++) {
		cout << shopping[i] << " ";
	}





} 

	
