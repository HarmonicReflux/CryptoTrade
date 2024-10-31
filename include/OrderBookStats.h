#pragma once

#include <vector>
#include <algorithm>
#include "OrderBookEntry.h"

// Function to compute the average price
double computeAveragePrice(const std::vector<OrderBookEntry> &orders);

// Function to compute the lowest price
double computeLowPrice(const std::vector<OrderBookEntry> &orders);

// Function to compute the highest price
double computeHighPrice(const std::vector<OrderBookEntry> &orders);

// Function to compute the price spread (difference between the highest and lowest price)
double computePriceSpread(const std::vector<OrderBookEntry> &orders);
