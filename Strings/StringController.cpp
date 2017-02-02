//
//  StringController.cpp
//  Strings
//
//  Created by Gallup, Tyler on 2/2/17.
//  Copyright © 2017 Gallup, Tyler. All rights reserved.
//

#include <iostream>
#include <String>
#include "StringController.hpp"

StringController:: StringController()
{
    derpy = "derp derp derp";
    otherWordz = "oh more words?"
}

void StringController:: start()
{
    numberMethods();
}

void StringController:: numberMethods()
{
    int count = derpy.size();
    cout << "The number of letters in the derpy variable is : " << count << endl;
    cout << "So, the size() method of string works like the length() method of Java on String" << endl;
    
    cout << otherWordz.at(4) << endl;
    
    string temp = derpy.substr(3);
    cout << temp << endl;
    
}
