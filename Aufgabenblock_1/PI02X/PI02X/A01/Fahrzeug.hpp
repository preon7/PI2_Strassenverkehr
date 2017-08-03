//
//  Fahrzeug.hpp
//  PI02XCODE
//
//  Created by FUREN on 01/08/17.
//
//

#ifndef Fahrzeug_hpp
#define Fahrzeug_hpp

#include <stdio.h>
#include <string>

class Fahrzeug
{

public:

    // constructur and destructur
    Fahrzeug();
    Fahrzeug(std::string name);
    Fahrzeug(std::string name, double geschwindigkeit);
    ~Fahrzeug();
    
    // field
    
    // functions
    void vAusgabe();
    
    static int iGetIDSpace();
    static int iGetNameSpace();
    static int iGetSpeedSpace();
    static int iGetMileageSpace();
    
private:
    
    // field
    static int p_iMaxID;
    static int p_iMaxIDSpace;
    static int p_iMaxNameSpace;
    static int p_iMaxSpeedSpace;
    static int p_iMaxMileageSpace;
    
    int p_iID;
    std::string p_sName;
    double p_dMaxGeschwindigkeit;
    double p_dGesamtStrecke;
    double p_dGesamtZeit;
    double p_dZeit;
    
    // functions
    void vInitialisierung();
    void vUpdateSpaces();
    
    int iCountDigits(int number);
    int iCountDigits(double number);
};

#endif /* Fahrzeug_hpp */
