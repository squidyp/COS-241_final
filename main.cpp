//
//  main.cpp
//  COS-241_final-project
//
//  Created by Charles Panter on 11/20/18.
//  Copyright © 2018-2019 Charles Panter. All rights reserved.
//

#include "ContactList.h"
#include <iostream>
#include <string>

std::string YourNameHere;
std::string WhoToName;

void menu();

int main() {
    ContactList* AddrBook = new ContactList();
    
    int choice = 9;
    std::cout << "Welcome to Card Generator 'R' Us \n";
    std::cout << "Please enter your name: ";
    std::cin >> YourNameHere;
    std::cout << std::endl;
    
    while (choice != 0){
         menu();
    std:: cin >> choice;
    switch (choice){
        case 1:std::cout << '\n';
            AddrBook->addToHead();
            break;
        case 2:std::cout << '\n';
            AddrBook->deleteNode();
            break;
        case 3:std::cout << '\n';
            AddrBook->changeName();
            break;
        case 4: std::cout << '\n';
            AddrBook->birthCards(YourNameHere);
            break;
        case 5:std::cout << '\n';
            AddrBook->anniCards(YourNameHere);
            break;
        case 6:std::cout <<'\n';
            AddrBook->PrintList();
            break;
        case 0: std::cout << "See you next time! \n\n";
            return 0;
        default:std::cout << '\n';
            break;
    };
    }
    
    
    return 0;
}
void menu(){
    std::cout << "Please Choose from one of the following: \n";
    std::cout << std::endl;
    std::cout << "1 - Enter a new name into the address book \n" << "2 - Delete a name from the address book \n" << "3 - Change a name in the address book \n" << "4 - Generate birthday cards \n" << "5 - Generate anniversary cards \n" << "6 - Print names \n" << "0 - Exit the card program \n" << std::endl;
    std::cout << "#: ";
}
