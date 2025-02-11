#ifndef TICKETSYSTEM_H
#define TICKETSYSTEM_H

#include <string>

class TicketSystem
{
public:
    bool validateInputData(std::string ticketId, double fareAmount, const std::string &passengerType, const std::string &journeyDate, const std::string &routeInfo);
    double calculateTotalFare(double fareAmount, const std::string &passengerType);
    double applyDiscounts(double fareAmount, const std::string &passengerType);
    int generateUniqueId();
    void storeTicketInformation(std::string ticketId, double fareAmount, const std::string &passengerType, const std::string &journeyDate, const std::string &routeInfo, double totalFare);
    void printTicketDetails(std::string ticketId);
    void showErrorMessages(const std::string &error);
    void displayValidationStatus(bool status);
    void generateReports();
    void createNewTicket(int ticketId, double fareAmount, const std::string &passengerType, const std::string &journeyDate, const std::string &routeInfo);
    void updateTicketStatus(int ticketId, const std::string &status);
    double calculateTotalFares();
    void printReports();
};

#endif // TICKETSYSTEM_H