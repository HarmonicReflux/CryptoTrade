# minimum required version of CMake
cmake_minimum_required(VERSION 3.10)

# project name and C++ standard
project(CryptoTrade)
set(CMAKE_CXX_STANDARD 11)

# include the header files directory
include_directories(include)

# add source files
set(SOURCE_FILES
    src/CSVReader.cpp
    src/main.cpp
    src/MerkelMain.cpp
    src/OrderBook.cpp
    src/OrderBookEntry.cpp
    src/Wallet.cpp
)

# add the executable
add_executable(CryptoTrade.out ${SOURCE_FILES})

