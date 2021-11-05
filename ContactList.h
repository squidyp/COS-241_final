//
//  ContactList.h
//  node
//
//  Created by Charles Panter on 1/26/19.
//  Copyright © 2019 Charles Panter. All rights reserved.
//

#ifndef ContactList_h
#define ContactList_h

#include "Contact.h"

class ContactList{
    
public:
    ContactList();
    void addToHead();
    void PrintList();
    void deleteNode();
    void changeName();
    void birthCards(std::string& fromName);
    void anniCards(std::string& fromName);
    
private:
    Contact* head;
    int size;
    
    
};

#endif /* ContactList_h */
