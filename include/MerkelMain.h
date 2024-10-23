#pragma once // pre-processor directive; avoids including header files more than once.

#include "OrderBookEntry.h"
#include "OrderBook.h"
#include "Wallet.h"

class MerkelMain
{
    public:
        MerkelMain();
        /** Call this to start the sim */
        void init();
    private:        
        // define the function prototypes
        void printMenu();
        void printHelp();
        void printMarketStats();
        void enterAsk();
        void enterBid();
        void printWallet();
        void gotoNextTimeframe();
        void checkUserInput(int userOption);
        void processUserOption(int userOption);
        int getUserOption();

        std::string currentTime;

        // OrderBook orderBook{"test.csv"};
        OrderBook orderBook{"20200317.csv"};

        Wallet wallet;
};