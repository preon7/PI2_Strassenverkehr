//
//  main.cpp
//  PI02X
//
//  Created by FUREN on 01/08/17.
//  Copyright © 2017 Ruiheng Wu. All rights reserved.
//

#include <iostream>
#include "Fahrzeug.hpp"

void vAufgabe_1();

int main(int argc, const char * argv[]) {
    
    vAufgabe_1();
    return 0;
}

void vAufgabe_1()
{
    static Fahrzeug f1;
    
    Fahrzeug *f2 = new Fahrzeug("f2");
    
    delete f2;
}
