#include "TicketSystem.h"
#include <iostream>
#include <stdexcept>
#include <string>
#include <unordered_map>
#include <vector>
#include <fstream>


// Implement By Dickens
template <typename T, typename U, typename V>
void TicketSystem<T, U, V>::displayValidationStatus(bool status)
{
    if (status)
    {
        std::cout << "Validation successful." << std::endl;
    }
    else
    {
        std::cout << "Validation failed." << std::endl;
    }
}

template <typename T, typename U, typename V>
void TicketSystem<T, U, V>::createNewTicket()
{
    try
    {
        if (!validateInputData(ticketId, fareAmount, passengerType, journeyDate, routeInfo))
        {
            throw std::invalid_argument("Invalid input data.");
        }
        U totalFare = calculateTotalFare(fareAmount, passengerType);
        storeTicketInformation(ticketId, fareAmount, passengerType, journeyDate, routeInfo, totalFare);
        printTicketDetails(ticketId);
    }
    catch (const std::exception &e)
    {
        showErrorMessages(e.what());
    }
}

template <typename T, typename U, typename V>
void TicketSystem<T, U, V>::updateTicketStatus(T ticketId, const V &status)
{
    // Implementation for updating ticket status
}

template <typename T, typename U, typename V>
void TicketSystem<T, U, V>::printReports()
{
    // Get report generated from file ticket_report.txt and print
    std::ifstream reportFile("ticket_report.txt");

    if (reportFile.is_open())
    {
        std::string line;
        while (std::getline(reportFile, line))
        {
            std::cout << line << std::endl;
        }

        reportFile.close();
    }
    else
    {
        std::cerr << "Error: Unable to open file for reading." << std::endl;
    }
}

template <typename T, typename U, typename V>
void TicketSystem<T, U, V>::generateReports()
{
    // Implementation for generating reports
    std::ofstream reportFile("ticket_report.txt");

    if (reportFile.is_open())
    {
        reportFile << "Ticket Report" << std::endl;
        reportFile << "Ticket ID | Fare Amount | Passenger Type | Journey Date | Route Info | Total Fare" << std::endl;

        for (const auto &ticket : tickets)
        {
            reportFile << ticket.getTicketId() << " | " << ticket.getFareAmount() << " | " << ticket.getPassengerType() << " | " << ticket.getJourneyDate() << " | " << ticket.getRouteInfo() << " | " << ticket.getTotalFare() << std::endl;
        }

        reportFile.close();
    }
    else
    {
        std::cerr << "Error: Unable to open file for writing." << std::endl;
    }
}

// Explicit template instantiation
template class TicketSystem<int, double, std::string>;