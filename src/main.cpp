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

    // Wallet wallet;
    // wallet.insertCurrency("BTC", 10);
    // wallet.insertCurrency("USDT", 10000);
    // std::cout << wallet.toString() << std::endl;
    // wallet.removeCurrency("USDT", 1000);
    // std::cout << wallet.toString() << std::endl;
}

    // // Iterating over the orders and printing them
    // for (unsigned int i = 0; i < orders.size(); ++i)
    // {
    //     std::cout << "ORDER " << i + 1 << ":" << std::endl;
    //     std::cout << "- Price: " << orders[i].price << std::endl;
    //     std::cout << "- Amount: " << orders[i].amount << std::endl;
    //     std::cout << "- Timestamp: " << orders[i].timestamp << std::endl;
    //     std::cout << "- Product: " << orders[i].product << std::endl;
    //     if (orders[i].orderType == OrderBookType::bid)
    //     {
    //         std::cout << "- Order type: bid" << std::endl;
    //     }
    //     else
    //     {
    //         std::cout << "- Order type: ask" << std::endl;
    //     }
    // }

    // // Computing statistics
    // double averagePrice = computeAveragePrice(orders);
    // double lowPrice = computeLowPrice(orders);
    // double highPrice = computeHighPrice(orders);
    // double priceSpread = computePriceSpread(orders);

    // // Printing the results
    // std::cout << "\n=== STATISTICS ===" << std::endl;
    // std::cout << "Average Price: " << averagePrice << std::endl;
    // std::cout << "Lowest Price: " << lowPrice << std::endl;
    // std::cout << "Highest Price: " << highPrice << std::endl;
    // std::cout << "Price Spread: " << priceSpread << std::endl;

    // // three styles for iterating over a vector and printing its contents:
    // for (OrderBookEntry &order : orders) // iterator by reference
    // {
    //     std::cout << "The price is " << order.price << std::endl;
    // }

    // std::cout << std::endl;
    
    // Iteration alternative 2
    // for (unsigned int i = 0; i < orders.size(); ++i)
    // {
    //     std::cout << "current i is " << i << std::endl;
    //     std::cout << "The price is " << orders[i].price << std::endl;
    // }

    // std::cout << std::endl;

    // Iteration alternative 3
    // for (unsigned int i = 0; i < orders.size(); ++i)
    // {
    //     std::cout << "current i is " << i << std::endl;
    //     std::cout << "The price is " << orders.at(i).price << std::endl;
    // }

    // computation of sample statistics: