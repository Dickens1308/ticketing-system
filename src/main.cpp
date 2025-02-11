#include <iostream>
#include "TicketSystem.h"

int main() {
    try {
        int ticketId;
        double fareAmount;
        std::string passengerType;
        std::string journeyDate;
        std::string routeInfo;

        // Input collection (this would typically come from user input)
        std::cout << "Enter Ticket ID: ";
        std::cin >> ticketId;
        std::cout << "Enter Fare Amount: ";
        std::cin >> fareAmount;
        std::cout << "Enter Passenger Type: ";
        std::cin >> passengerType;
        std::cout << "Enter Journey Date: ";
        std::cin >> journeyDate;
        std::cout << "Enter Route Info: ";
        std::cin >> routeInfo;

        TicketSystem ticketSystem(ticketId, fareAmount, passengerType, journeyDate, routeInfo);
        ticketSystem.createNewTicket();
    } catch (const std::exception& e) {
        std::cerr << "An error occurred: " << e.what() << std::endl;
    }

    return 0;
}