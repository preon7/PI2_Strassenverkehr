//
//  Fahrzeug.cpp
//  PI02XCODE
//
//  Created by FUREN on 01/08/17.
//
//

#include "Fahrzeug.hpp"
#include <iostream>
#include <iomanip>

using namespace std;

// initialize static variables
int Fahrzeug::p_iMaxID = 0;
int Fahrzeug::p_iMaxIDSpace = 6;
int Fahrzeug::p_iMaxNameSpace = 8;
int Fahrzeug::p_iMaxSpeedSpace = 10;
int Fahrzeug::p_iMaxMileageSpace = 17;

/**
 constructur and destructur
*/

Fahrzeug::Fahrzeug()
{
    vInitialisierung();
    
    vUpdateSpaces();
    
    std::cout << "Construct class \"Fahrzeug\" with name: " << p_sName << ", and ID: " << p_iID << "\n";
}

Fahrzeug::Fahrzeug(string name)
{
    vInitialisierung();
    p_sName = name;
    
    vUpdateSpaces();
    
    cout << "Construct class \"Fahrzeug\" with name: " << p_sName << ", and ID: " << p_iID << "\n";
}

Fahrzeug::Fahrzeug(string name, double geschwindigkeit)
{
    vInitialisierung();
    p_sName = name;
    p_dMaxGeschwindigkeit = geschwindigkeit;
    
    vUpdateSpaces();
    
    cout << "Construct class \"Fahrzeug\" with name: " << p_sName << ", and ID: " << p_iID << "\n";
}

Fahrzeug::~Fahrzeug()
{
    cout << "Destruct class \"Fahrzeug\" with name: " << p_sName << ", and ID: " << p_iID << "\n";
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

void Fahrzeug::vUpdateSpaces()
{
    if (p_sName.length() + 4 > p_iMaxNameSpace) {
        p_iMaxNameSpace = p_sName.length() + 4;
    }
    
    if (iCountDigits(p_iMaxID) + 4 > p_iMaxIDSpace) {
        p_iMaxIDSpace = iCountDigits(p_iMaxID) + 4;
    }
    
    if (iCountDigits(p_dMaxGeschwindigkeit) + 4 > p_iMaxSpeedSpace) {
        p_iMaxSpeedSpace = iCountDigits(p_dMaxGeschwindigkeit) + 4;
    }
    
    if (iCountDigits(p_dGesamtStrecke) + 4 > p_iMaxMileageSpace) {
        p_iMaxMileageSpace = iCountDigits(p_dGesamtStrecke) + 4;
    }
}

int Fahrzeug::iCountDigits(int number)
{
    int out = 1;
    while (number > 10) {
        number = number / 10;
        out ++;
    }
    
    return out;
}

int Fahrzeug::iCountDigits(double number)
{
    int out = 1;
    while (number > 10) {
        number = number / 10;
        out ++;
    }
    
    return out + 3;
}

void Fahrzeug::vAusgabe()
{
    //cout << "test result: " << iCountDigits(200);
    //cout << "test result: " << p_iMaxNameSpace << "\n";
    cout << setw(p_iMaxIDSpace) << p_iID << setw(p_iMaxNameSpace)
        << p_sName << setw(4) << ":" << setw(p_iMaxSpeedSpace) <<
        p_dMaxGeschwindigkeit << setw(p_iMaxMileageSpace) <<
        p_dGesamtStrecke;
}

int Fahrzeug::iGetIDSpace()
{
    return p_iMaxIDSpace;
}

int Fahrzeug::iGetNameSpace()
{
    return p_iMaxNameSpace;
}

int Fahrzeug::iGetSpeedSpace()
{
    return p_iMaxSpeedSpace;
}

int Fahrzeug::iGetMileageSpace()
{
    return p_iMaxMileageSpace;
}
