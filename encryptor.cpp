#include<iostream>
#include<string>

std::string encrypt(std::string input){
	return "Still in progress";
}

std::string hash(std::string input){
	return "Still in progrss";
}

int main(){
	int choice;
	std::string input;
	std::cout << "Welcome to encrypting space\nPress 1 to encrypt and 2 to hash\nPlease input your choice(1/2): "; std::cin >> choice;
	std::cout << "Enter string to be hashed: "; std::cin >> input;

	if (choice == 1){ std::cout << encrypt(input);}
	if (choice == 2){ std::cout << hash(input);}
	return 0;
}
