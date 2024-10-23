#pragma once

#include <string>

enum class OrderBookType
{
    bid,
    ask,
    unknown,
    asksale,
    bidsale
};

/**
 * @class OrderBookEntry
 * @brief Represents an entry in the order book for a cryptocurrency trading engine.
 * 
 * The OrderBookEntry class stores details of a trading order, such as the price, 
 * amount, timestamp, product (trading pair), and whether the order is a bid (buy) 
 * or an ask (sell). This class is part of a cryptocurrency trading engine and helps 
 * manage the order book for matching buy and sell orders.
 */
class OrderBookEntry
{
public:
    /**
     * @brief Constructor for the OrderBookEntry class.
     * 
     * This constructor initializes an order book entry with the given parameters 
     * such as price, amount, timestamp, product, and order type (bid or ask).
     * 
     * @param _price The price at which the asset is being bought or sold.
     * @param _amount The amount of the asset to be traded.
     * @param _timestamp The time when the order was placed.
     * @param _product The trading pair involved in the order (e.g., "ETH/BTC").
     * @param _orderType The type of order (either bid or ask).
     */
    OrderBookEntry(
        // fields for the objects
        double _price,
        double _amount,
        std::string _timestamp,
        std::string _product,
        OrderBookType _orderType,
        std::string username ="dataset");

    static OrderBookType stringToOrderBookType(std::string s);

    static bool compareByTimestamp(const OrderBookEntry& e1, const OrderBookEntry &e2)
    {
        return e1.timestamp < e2.timestamp;
    }

    static bool compareByPriceAsc(const OrderBookEntry &e1, const OrderBookEntry &e2)
    {
        return e1.price < e2.price;
    }

    static bool compareByPriceDesc(const OrderBookEntry &e1, const OrderBookEntry &e2)
    {
        return e1.price > e2.price;
    }

    // data members: holds any data that comes into the constructor
    double price;
    double amount;
    std::string timestamp;
    std::string product;
    OrderBookType orderType;
    std::string username;
};