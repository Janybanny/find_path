#include "station.h"
#include <string>
#include <map>

Station::Station(std::string creationname)
{
    name = creationname;
    transfer = false;
    faststops = new std::map<std::string, int>;
    stops = new std::map<std::string, int>;
}

Station::~Station()
{
    delete faststops;
    delete stops;
}
