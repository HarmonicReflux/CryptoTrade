/* To compile tohe project from the command line, use:
g++ --std = c++ 11 CSVReader.cpp MerkelMain.cpp OrderBook.cpp OrderBookEntry.cpp Wallet.cpp main.cpp
or
g++ --std = c++ 11 CSVReader.cpp MerkelMain.cpp OrderBook.cpp OrderBookEntry.cpp Wallet.cpp main.cpp - o CryptoTrade.out
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm> // For std::min_element and std::max_element
#include "MerkelMain.h"
#include "OrderBookEntry.h"
#include "OrderBookStats.h"
#include "CSVReader.h"
#include "Wallet.h"

                                                                                                       int
                                                                                                       main()
{
    MerkelMain app{}; //app {} calls the constructor
    app.init();
}

