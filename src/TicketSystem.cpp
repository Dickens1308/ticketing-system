#include "TicketSystem.h"
#include <iostream>
#include <stdexcept>
#include <string>
#include <unordered_map>
#include <vector>
#include <fstream>

bool TicketSystem::validateInputData(int ticketId, double fareAmount, const std::string &passengerType, const std::string &journeyDate, const std::string &routeInfo)
{
    // Implement validation logic
    return true; // Placeholder
}

double TicketSystem::calculateTotalFare(double fareAmount, const std::string &passengerType)
{
    // Implement fare calculation logic
    return fareAmount; // Placeholder
}

// Implement By Dickens
void TicketSystem::displayValidationStatus(bool status)
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

void TicketSystem::generateReports()
{
    std::vector<TicketSystem> tickets = getTickets();
    std::ofstream reportFile("ticket_report.txt");

    if (reportFile.is_open())
    {
        reportFile << "Ticket Report\n";
        reportFile << "=============\n\n";

        for (const auto &ticket : tickets)
        {
            reportFile << "Ticket ID: " << ticket.getTicketId() << " | ";
            reportFile << "Fare Amount: " << ticket.getFareAmount() << " | ";
            reportFile << "Passenger Type: " << ticket.getPassengerType() << " | ";
            reportFile << "Journey Date: " << ticket.getJourneyDate() << " | ";
            reportFile << "Route Info: " << ticket.getRouteInfo() << " | ";
            reportFile << "Total Fare: " << ticket.getTotalFare() << std::endl;
        }

        reportFile.close();
        std::cout << "Report generated successfully." << std::endl;
    }
    else
    {
        std::cerr << "Error: Unable to open file for writing." << std::endl;
    }
}

void TicketSystem::createNewTicket(int ticketId, double fareAmount, const std::string &passengerType, const std::string &journeyDate, const std::string &routeInfo)
{
    try
    {
        if (!validateInputData(ticketId, fareAmount, passengerType, journeyDate, routeInfo))
        {
            throw std::invalid_argument("Invalid input data.");
        }
        double totalFare = calculateTotalFare(fareAmount, passengerType);
        storeTicketInformation(ticketId, fareAmount, passengerType, journeyDate, routeInfo, totalFare);
        printTicketDetails(ticketId);
    }
    catch (const std::exception &e)
    {
        showErrorMessages(e.what());
    }
}

void TicketSystem::updateTicketStatus(int ticketId, const std::string &status)
{
}

double TicketSystem::calculateTotalFares()
{
    double totalFares = 0.0;

    // Assuming we have a vector of tickets
    std::vector<TicketSystem> tickets = getTickets();

    // Sum up the fares of all tickets
    for (const auto &ticket : tickets)
    {
        totalFares += ticket.getTotalFare();
    }

    return totalFares;
}

void TicketSystem::printReports()
{
    // Assuming we have a vector of tickets
    std::vector<TicketSystem> tickets = getTickets();

    // Print the report header
    std::cout << "Ticket Report\n";
    std::cout << "=============\n\n";

    // Print each ticket's details
    for (const auto &ticket : tickets)
    {
        std::cout << "Ticket ID: " << ticket.getTicketId() << " | ";
        std::cout << "Fare Amount: " << ticket.getFareAmount() << " | ";
        std::cout << "Passenger Type: " << ticket.getPassengerType() << " | ";
        std::cout << "Journey Date: " << ticket.getJourneyDate() << " | ";
        std::cout << "Route Info: " << ticket.getRouteInfo() << " | ";
        std::cout << "Total Fare: " << ticket.getTotalFare() << std::endl;
    }
}