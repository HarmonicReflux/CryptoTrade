#pragma once

#include <string>
#include <vector>
#include "OrderBookEntry.h"

class CSVReader
{
public:
    CSVReader();
    static std::vector<OrderBookEntry> readCSV(std::string csvFile);
    static std::vector<std::string> tokenise(std::string csvLine, char separator);

    //function overloading with private member stringsToOBE 
    static OrderBookEntry stringsToOBE(std::string price,
                                       std::string amount,
                                       std::string timestamp,
                                       std::string product,
                                       OrderBookType OrderBookType);

private:
    static OrderBookEntry stringsToOBE(std::vector<std::string> strings);
};