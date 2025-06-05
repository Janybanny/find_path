#ifndef STATION_H
#define STATION_H
#include <string>
#include <map>

class Station
{
public:
    Station(std::string creationname);
    ~Station();
private:
    std::string name;
    bool transfer;
    std::map<std::string, int>* faststops; // Die nächsten Umsteigestationen in alle Richtungen, name & minutes
    std::map<std::string, int>* stops; // Alle Stationen bis zur nächsten Umsteigestation, name & minutes
};

#endif // STATION_H
