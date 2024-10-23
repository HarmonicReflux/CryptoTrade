#pragma once

#include <string>
#include <vector>
#include "OrderBookEntry.h"
#include "CSVReader.h"

class OrderBook
{
    public:
    /** construct, reading a csv data file*/
        OrderBook(std::string filename);
    /** return vector of all known products in the data set*/
        std::vector<std::string> getKnownProducts();
    /** return vector of Orders according to the set files*/
        std::vector<OrderBookEntry> getOrders(OrderBookType type,
                                              std::string product,
                                              std::string timestamp
                                              );

        
        /** returns the earliest time in the orderbook*/
        std::string getEarlierstTime();

        /** returns the next time after the sent time in the orderbook.
         * If there is no next timestamp, wraps around to the start. 
         */
        std::string getNextTime(std::string timestamp);

        void insertOrder(OrderBookEntry &order);

        std::vector<OrderBookEntry> matchAsksToBids(std::string prodict, std::string timestamp);

        static double getHighPrice(std::vector<OrderBookEntry> &orders);
        static double getLowPrice(std::vector<OrderBookEntry> &orders);

    private:
        std::vector<OrderBookEntry> orders;
};