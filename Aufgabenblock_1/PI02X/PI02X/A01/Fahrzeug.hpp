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

    // constructur and deconstructur
    Fahrzeug();
    Fahrzeug(std::string name);
    Fahrzeug(std::string name, double geschwindigkeit);
    ~Fahrzeug();
    
private:
    
    // field
    static int p_iMaxID;
    int p_iID;
    std::string p_sName;
    double p_dMaxGeschwindigkeit;
    double p_dGesamtStrecke;
    double p_dGesamtZeit;
    double p_dZeit;
    
    // functions
    void vInitialisierung();
    
};

#endif /* Fahrzeug_hpp */
