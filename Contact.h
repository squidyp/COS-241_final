//
//  Contact.h
//  COS-241_final-project
//
//  Created by Charles Panter on 11/22/18.
//  Copyright © 2018-2019 Charles Panter. All rights reserved.
//

#ifndef Contact_h
#define Contact_h

#include <iostream>
#include <stdio.h>
#include <string>

class Contact{
    friend std::ostream& operator<< (std::ostream& os, Contact& c);
    friend class ContactList;
    
private:
    std::string name;
    Contact* next;
    Contact* back;


public:
    Contact(std::string name = "none");
    

};

#endif /* Contact_h */
