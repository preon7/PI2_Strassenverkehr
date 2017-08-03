//
//  main.cpp
//  PI02X
//
//  Created by FUREN on 01/08/17.
//  Copyright © 2017 Ruiheng Wu. All rights reserved.
//

#include <iostream>
#include "Fahrzeug.hpp"
#include <iomanip>

using namespace std;

void vAufgabe_1();

int main(int argc, const char * argv[]) {
    
    vAufgabe_1();
    return 0;
}

void vAufgabe_1()
{
    static Fahrzeug f1;
    
    Fahrzeug *f2 = new Fahrzeug("f2");
    Fahrzeug *f3 = new Fahrzeug("longname", 200);
    Fahrzeug *f4 = new Fahrzeug("f4", 65000);
    
    cout << endl;

    cout << resetiosflags(ios::adjustfield);
    cout << setiosflags(ios::left);
    cout << setw(Fahrzeug::iGetIDSpace()) << "ID" << setw(Fahrzeug::iGetNameSpace())
        << "Name" << setw(4) << ":" << setw(Fahrzeug::iGetSpeedSpace()) <<
        "MaxKmh" << setw(Fahrzeug::iGetMileageSpace()) << "GesamtStrecke";
    
    cout << endl;
    
    cout << setfill('+') << setw(Fahrzeug::iGetIDSpace() + Fahrzeug::iGetNameSpace()
                                 + Fahrzeug::iGetSpeedSpace() + Fahrzeug::iGetMileageSpace() + 4)
        << '+' << setfill(' ');
    
    cout << endl;
    
    cout << resetiosflags(ios::adjustfield);
    cout << setiosflags(ios::left);
    f2->vAusgabe();
    
    cout << endl;
    
    f3->vAusgabe();
    
    cout << endl;
    
    f4->vAusgabe();
    
    cout << endl;
    cout << endl;
    
    delete f2;
    delete f3;
    delete f4;
}
