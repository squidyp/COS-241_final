//
//  ContactList.cpp
//  node
//
//  Created by Charles Panter on 1/26/19.
//  Copyright © 2019 Charles Panter. All rights reserved.
//

#include <stdio.h>
#include "ContactList.h"

ContactList::ContactList():head(NULL), size(0){}

void ContactList::addToHead(){
    while(true){
    std::string name;
        std::cout << "Enter name or 'q' to quite: ";
    std::cin >> name;
        if(name == "q")break;
    
    Contact* n = new Contact(name);
    
    if(head == NULL){
        head = n;
    }else{
        n->next = head;
        head->back = n;
        head = n;
    }
    size++; 
}
    std::cout << '\n';
}

void ContactList::PrintList(){
    Contact* pp = head;
    
    while(pp != NULL){
        std::cout << *pp << std::endl;
        pp = pp->next;
    }
    std::cout <<'\n';
}

void ContactList::deleteNode(){
    std::string name;
    std::cout << "What name would you like to delete? ";
    std::cin >> name;
    if(head == NULL){   //see if list is empty
        std::cout << "list is empty\n";
    }else{          //finding a name
        Contact* curr = head;
        Contact* trail = NULL;
        while(curr!= NULL){
            if(curr->name == name){
                break;
            }else{
                trail = curr;
                curr = curr->next;
            }
        }
        if(curr == NULL){  //name not found
            std::cout << "Name not found";
        }else{
            if(head == curr){//delete head
                head = curr->next;
            }else{
                trail->next = curr->next;  //delete from anywhere not head
            }
        }delete curr;
        size --;
    }
}
void ContactList::birthCards(std::string& fromName){
    Contact* person = head;
    while(person != NULL){
    std::cout << "Dear " << person->name <<",\n";
    std::cout << " Hope your birthday is really wonderful and this coming year is the best yet! \n Love, \n" <<' ' << fromName << "\n\n";
        person = person->next;
    }
}

void ContactList::anniCards(std::string& fromName){
    Contact* person = head;
    while(person != NULL){
        std::cout << "Dear " << person->name << "\n";
        std::cout << " Congratulations! You made it another year. Happy anniversary I hope this year is even better than the last! \n Sincerely, \n" <<' '<< fromName << "\n\n";
        person = person->next;
    }
    
}


void ContactList::changeName(){
    
    std::string name;
    std::cout << "What name would you like change? ";
    std::cin >> name;
    if(head->name == name){   //name is the head node
        std::cout << "What would you like to change it to? ";
        std::cin >> name;
        head->name = name;
    }else{
        Contact* curr = head;
        Contact* trail = NULL;
        while(curr!= NULL){ //name is any other name
            if(curr->name == name){
                break;
            }else{
                trail = curr;
                curr = curr->next;
            }
            if(curr == NULL){
                std::cout << name << " not found in address book \n";
            }
                std::cout << "What would you like to change it to? ";
                std::cin >> name;
                curr->name = name;
        }
    }
}
