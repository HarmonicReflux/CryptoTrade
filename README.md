# CryptoTrade

This project is a simple crypto trading application, written in C++, and based off a Coursera project, that uses recorded orderbook data to interact with in a market simulator from the command line using C++. It includes a modular design with several components, such as CSV reading, order book management, and wallet handling, all set up with CMake for easy building and extensibility.

## Project structure

- **`src/`**: Contains all source code files (`.cpp`).
- **`include/`**: Header files (`.h`) for each module.
- **`build/`**: Directory to hold build artifacts (ignored in Git).
- **`data/`**: Directory with sample data (e.g., `20200317.csv`).
- **`CMakeLists.txt`**: CMake configuration file to build the project.

## Features

- **Order Book**: Manages buy and sell orders from a CSV file.
- **CSV Reader**: Reads and parses CSV files.
- **Wallet**: Manages the user's available cryptocurrency and handles transactions.
- **Command-line Interface**: Provides an interactive way to simulate trading decisions.

## Requirements

- **C++11 or higher**: Make sure your compiler supports C++11.
- **CMake**: Version 3.10 or higher is recommended.

## Installation

1. **Clone the repository**:
    ```bash
    git clone https://github.com/yourusername/CryptoTrade.git
    cd CryptoTrade
    ```

2. **Build the project**:
    ```bash
    mkdir build
    cd build
    cmake ..
    make
    ```

   This will generate the executable `CryptoTrade.out` in the `build` directory.

## Usage

To run the application, use the following command from the `build` directory:

```bash
./CryptoTrade.out
```
The program expects a CSV file containing cryptocurrency trading data. By default, it reads `data/20200317.csv` (further details below).

## Project components

The main components are as follows:

1. CSVReader
The CSVReader module reads CSV files to extract trading data.

2. OrderBook
OrderBook manages buy and sell orders, allowing the user to enter bids and asks, and view the order book statistics.

3. Wallet
The Wallet component keeps track of the user's cryptocurrency balance and supports basic transaction management.

4. MerkelMain
MerkelMain handles the user interface and controls the simulation flow. Users can enter commands to place bids, view market stats, and move between timeframes.

5. Example data
Sample data is provided in `data/20200317.csv`. This file must be placed in the data directory for the program to access it by default. The data format should match the structure expected by `CSVReader`.
