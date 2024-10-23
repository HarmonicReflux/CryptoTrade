#include "OrderBookEntry.h"

OrderBookEntry::OrderBookEntry(
    // fields of the object
    double _price,
    double _amount,
    std::string _timestamp,
    std::string _product,
    OrderBookType _orderType,
    std::string _username)
    // member initialisation; list initialises variables when calling the
    // constructor
    // Question: price(_price), i.e. with () instead of {}
    // works as well. How come thhis indifference?
    : price{_price},
      amount{_amount},
      timestamp{_timestamp},
      product{_product},
      orderType{_orderType},
      username{_username}
      {
        //
      }
      //Question: `{};` i.e. with semicolon on line 21 works as well.
      // Why is cpp so picky with semicolons in some case,
      // but not in others?

OrderBookType OrderBookEntry::stringToOrderBookType(std::string s)
{
  if(s=="ask")
  {
    return OrderBookType::ask;
  }
  if (s == "bid")
  {
    return OrderBookType::bid;
  }
  return OrderBookType::unknown;
}