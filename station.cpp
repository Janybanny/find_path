#include "station.h"
#include <string>
#include <map>
#include "connection.h"

Station::Station(std::string creationname)
{
    name = creationname;
    transfer = false;
    faststops = new std::map<std::string, Connection>;
    stops = new std::map<std::string, Connection>;
}

Station::~Station()
{
    delete faststops;
    delete stops;
}
