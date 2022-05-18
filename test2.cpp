#include <iostream>
struct Node{
	std::string code;
	std::string name;
	std::string destination;
	int price;
	int stock;
	Node *next;
};

class List{
	public:	
		int count = 0;
		Node* head;
		List(){
			head = NULL;}
		void push(){
			std::string input;
			int inpt;
			Node* new_node = new Node();
			std::cout << "Enter ticket code: ";
			std::cin >> input;                   
			new_node->code = input;
			std::cout << "Enter Name: "; 
			std::cin.ignore();
			std::getline(std::cin, input);
			new_node->name = input;
			std::cout << "Enter destination: ";
			std::cin >> input;
			new_node->destination = input;
			std::cout << "Enter price: ";
			std::cin >> inpt;
			new_node->price = inpt;
			std::cout << "Enter stock: ";
			std::cin >> inpt;
			new_node->stock = inpt;
		    new_node->next = head;
		    head = new_node;
		    count++;
		};
	
		void display(){
			Node* currNode = head;
			for(int i = 0; i < count;i++){
			std::cout << "code = " << currNode->code << std::endl;
			std::cout << "name = " << currNode->name << std::endl;
			std::cout << "destination = " << currNode->destination << std::endl;
			std::cout << "price = " << currNode->price << std::endl;
			std::cout << "stock = " << currNode->stock << std::endl;
			currNode = currNode->next;
			std::cout << std::endl;
		};
		};
		
		void sell(){
        std::string wad;
        Node* selling = head;
            std::cout << "Please enter the ticket code: ";
            std::cin >> wad;
            for(int i = 0; i < count; i++){
                if(wad == selling->code){
                    std::cout << "code = " << selling->code << std::endl;
                    std::cout << "name = " << selling->name << std::endl;
                    std::cout << "destination = " << selling->destination << std::endl;
                    std::cout << "price = " << selling->price << std::endl;
                    std::cout << "stock = " << selling->stock << std::endl;
                };

            };

            int ticket_number;
            int totalprice = 0;
                std::cout << "How many tickets: ";
            std::cin >> ticket_number;
                if(ticket_number < 4){
                    totalprice =  ticket_number * selling->price;
                    if(totalprice>2000000){
                    totalprice = totalprice * 90/100;
                    std::cout<<"The total price is "<<totalprice << std::endl;
                    selling->stock + ticket_number;
                }else if(800000<=totalprice<=2000000){
                    totalprice = totalprice *95/100;
                    std::cout<<"The total price is " << totalprice << std::endl;
                    selling->stock + ticket_number;
                }else{
                    std::cout<<"The total price is "<< totalprice << std::endl;
                    selling->stock + ticket_number;
                }
            }else{
                std::cout<<"The tickets sold can't be more than 3."<< std::endl;
            };
        selling = selling->next;
}
	
	void deletion(){
		int mum;
		int dad;
		int ultimatum;
		std::string bod;
		Node*deleting = head;
		std::cout << "Please enter the ticket code: ";
		std::cin >> bod;
		for(int i = 0;i < count;i++){
			mum++;
		if(bod == deleting->code){
			std::cout << "code = " << deleting->code << std::endl;
			std::cout << "name = " << deleting->name << std::endl;
			std::cout << "destination = " << deleting->destination << std::endl;
			std::cout << "price = " << deleting->price << std::endl;
			std::cout << "stock = " << deleting->stock << std::endl;
			};};
		std::cout << "Are you sure? 1/2";
		std::cin >> ultimatum;
		if (ultimatum == 1){
		dad = count - mum;
		for(int i = 0;i < dad;i++){
			deleting->code = "";
			deleting->name = "";
			deleting->destination = "";
			deleting->price = NULL;
			deleting->stock = NULL;
			deleting->next = NULL;
			};
		};
	};
};

	
	