//
//  Contact.cpp
//  COS-241_final-project
//
//  Created by Charles Panter on 11/22/18.
//  Copyright © 2018-2019 Charles Panter. All rights reserved.
//

#include "Contact.h"
#include <iostream>
#include <string>

Contact::Contact(std::string n):name(n), next(NULL), back(NULL){}

std::ostream& operator<< (std::ostream& os, Contact& c){
    return os << "Name: " << c.name;
}






