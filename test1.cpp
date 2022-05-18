#include <iostream>
#include "test2.cpp"
int main(){
	int choice;
	List linkedlist;
	while (true){
		std::cout << " 1. Add Ticket\n 2. Display Ticket\n 3. Sell Ticket\n 4. Delete Ticket\n 5. Exit\n";
		std::cin >> choice;
	if (choice == 1){
		linkedlist.push();
	};
	if (choice == 2){
		linkedlist.display();
	};
	if (choice == 3){
		linkedlist.sell();
	};
	if(choice == 4){
		linkedlist.deletion();
	};
	if(choice == 5){
		break;
	}
};
};

/*Add ticket uses O(1), this is due to the fact that input size does not determine
the speed of the insertion of the list. However, it would be O(n) if we inserted
from the tail of the linked list as the one used in this program is a singly
linked list.

Delete ticket uses O(n), we have to scan through the linked list to find the correct
node and delete it. Unlike an array where deletion is O(1), the linked list has to
scan throughout its entirety isntead of just calling and deleting the index.*/


