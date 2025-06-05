#ifndef STATION_H
#define STATION_H
#include <string>
#include <map>
#include "connection.h"

class Station
{
public:
    Station(std::string creationname);
    ~Station();
private:
    std::string name;
    bool transfer; // yes wenn Umsteigestation
    std::map<std::string, Connection>* faststops; // Die nächsten Umsteigestationen in alle Richtungen, name & minutes
    std::map<std::string, Connection>* stops; // Alle Stationen bis zur nächsten Umsteigestation, name & minutes
};

#endif // STATION_H
