//
//  Fahrzeug.cpp
//  PI02XCODE
//
//  Created by FUREN on 01/08/17.
//
//

#include "Fahrzeug.hpp"
#include <iostream>

// initialize static variables
int Fahrzeug::p_iMaxID = 0;

/**
 constructur and deconstructur
*/

Fahrzeug::Fahrzeug()
{
    vInitialisierung();
    
    std::cout << "Construct class \"Fahrzeug\" with name: " << p_sName << ", and ID: " << p_iID << "\n";
}

Fahrzeug::Fahrzeug(std::string name)
{
    vInitialisierung();
    p_sName = name;
    
    std::cout << "Construct class \"Fahrzeug\" with name: " << p_sName << ", and ID: " << p_iID << "\n";
}

Fahrzeug::Fahrzeug(std::string name, double geschwindigkeit)
{
    vInitialisierung();
    p_sName = name;
    p_dMaxGeschwindigkeit = geschwindigkeit;
    
    std::cout << "Construct class \"Fahrzeug\" with name: " << p_sName << ", and ID: " << p_iID << "\n";
}

Fahrzeug::~Fahrzeug()
{
    std::cout << "Deconstruct class \"Fahrzeug\" with name: " << p_sName << ", and ID: " << p_iID << "\n";
}

void Fahrzeug::vInitialisierung()
{
    p_iID = p_iMaxID;
    p_iMaxID ++;
    
    p_sName = " ";
    p_dMaxGeschwindigkeit = 0;
    p_dGesamtStrecke = 0;
    p_dGesamtZeit = 0;
    p_dZeit = 0;
}
