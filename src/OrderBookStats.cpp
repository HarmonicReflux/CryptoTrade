#include <vector>
#include <algorithm>
#include "OrderBookStats.h"

// Function to compute the average price
double computeAveragePrice(const std::vector<OrderBookEntry> &orders)
{
    double totalPrice = 0;
    for (const auto &order : orders)
    {
        totalPrice += order.price;
    }
    return orders.empty() ? 0.0 : totalPrice / orders.size();
}

// Function to compute the lowest price
double computeLowPrice(const std::vector<OrderBookEntry> &orders)
{
    if (orders.empty())
        return 0.0;

    auto minOrder = std::min_element(orders.begin(), orders.end(), [](const OrderBookEntry &a, const OrderBookEntry &b) {
        return a.price < b.price;
    });
    return minOrder->price;
}

// Function to compute the highest price
double computeHighPrice(const std::vector<OrderBookEntry> &orders)
{
    if (orders.empty())
        return 0.0;

    auto maxOrder = std::max_element(orders.begin(), orders.end(), [](const OrderBookEntry &a, const OrderBookEntry &b) {
        return a.price < b.price;
    });
    return maxOrder->price;
}

// Function to compute the price spread (difference between the highest and lowest price)
double computePriceSpread(const std::vector<OrderBookEntry> &orders)
{
    return computeHighPrice(orders) - computeLowPrice(orders);
}