# Ticketing System

## Overview
The Ticketing System is a C++ application designed to manage ticket sales, including the creation, processing, and reporting of tickets. It provides functionalities such as input validation, fare calculation, and error handling.

## Project Structure
```
ticketing-system
├── src
│   ├── main.cpp          # Entry point of the application
│   ├── TicketSystem.cpp  # Implementation of the TicketSystem class
│   └── TicketSystem.h    # Declaration of the TicketSystem class
├── include
│   └── TicketSystem.h    # Header file for external access
├── CMakeLists.txt        # Build configuration file
└── README.md             # Project documentation
```

## Setup Instructions
1. Clone the repository:
   ```
   git clone <repository-url>
   cd ticketing-system
   ```

2. Create a build directory and navigate into it:
   ```
   mkdir build
   cd build
   ```

3. Run CMake to configure the project:
   ```
   cmake ..
   ```

4. Build the project:
   ```
   make
   ```

## Usage
After building the project, run the executable generated in the build directory. The application will prompt you for ticket details and handle user interactions.

## Error Handling
The application employs try and catch blocks to manage exceptions and display appropriate error messages to the user, ensuring a smooth user experience.

## Features
- Validate input data for ticket creation
- Calculate total fares based on passenger type and discounts
- Generate unique ticket IDs
- Store and print ticket information
- Generate reports on ticket sales

## Contributing
Contributions are welcome! Please submit a pull request or open an issue for any enhancements or bug fixes.