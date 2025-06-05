#include <iostream>
#include <string>
#include <map>
#include "station.h"
#include "connection.h"

void readinitial(std::map<std::string, Station*>* allstations, std::map<std::string, Station*>* faststations) {
    // 1. Lesen/Erstellen aller Stationen und finden von Duplikaten
    // Laufzeit O(?)
    // TODO
}

void addlocalstops(std::map<std::string, Station*>* allstations, std::map<std::string, Station*>* faststations) {
    // 2. Zuweisen von allen Stationen bis zur nächsten Umsteigestation (inklusive Linien)
    // Laufzeit O(?)
    // TODO
}

void addtransitstops(std::map<std::string, Station*>* faststations) {
    // 3. Zuweisen von allen verbundenen Umsteigestationen zu den Umsteigestationen (inklusive Linien)
    // Laufzeit O(?)
    // TODO
}

int main(int argc, char **argv) {
    std::map<std::string, Station*>* allstations = new std::map<std::string, Station*>; // Alle Stationen
    std::map<std::string, Station*>* faststations = new std::map<std::string, Station*>; // Nur Umsteigestationen

    // 1. Lesen/Erstellen aller Stationen und finden von Duplikaten
    readinitial(allstations, faststations);

    // 2. Zuweisen von allen Stationen bis zur nächsten Umsteigestation (inklusive Linien)
    addlocalstops(allstations, faststations);

    // 3. Zuweisen von allen verbundenen Umsteigestationen zu den Umsteigestationen (inklusive Linien)
    addtransitstops(faststations);


    // 4. Suche
    // 4.1 Überprüfen ob die 2 Stationen in den Lokalen Stationen sind
    // 4.2 Die nächsten Umsteigestationen finden (falls nicht selbst eine Umsteigestation)
    // 4.3 Den kürzesten Path zwischen den 2 Umsteigestationen finden und dabei als string festhalten
    // 4.4 String mit Route ausgeben
    return 0;
}



