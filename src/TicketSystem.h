#ifndef TICKETSYSTEM_H
#define TICKETSYSTEM_H

#include <string>

class TicketSystem
{
private:
    int ticketId;
    double fareAmount;
    std::string passengerType;
    std::string journeyDate;
    std::string routeInfo;
    double totalFare;
    std::vector<TicketSystem> tickets;

public:
    // Getters
    int getTicketId() const { return ticketId; }
    double getFareAmount() const { return fareAmount; }
    std::string getPassengerType() const { return passengerType; }
    std::string getJourneyDate() const { return journeyDate; }
    std::string getRouteInfo() const { return routeInfo; }
    double getTotalFare() const { return totalFare; }
    std::vector<TicketSystem> getTickets() const { return tickets; }

    // Musa
    bool validateInputData(int ticketId, double fareAmount, const std::string &passengerType, const std::string &journeyDate, const std::string &routeInfo);
    double calculateTotalFare(double fareAmount, const std::string &passengerType);
    double applyDiscounts(double fareAmount, const std::string &passengerType);
    int generateUniqueId();
    void storeTicketInformation(int ticketId, double fareAmount, const std::string &passengerType, const std::string &journeyDate, const std::string &routeInfo, double totalFare);
    void printTicketDetails(int ticketId);
    void showErrorMessages(const std::string &error);
    // Dickens
    void displayValidationStatus(bool status);
    std::vector<TicketSystem> getTickets();
    void generateReports();
    void createNewTicket(int ticketId, double fareAmount, const std::string &passengerType, const std::string &journeyDate, const std::string &routeInfo);
    void updateTicketStatus(int ticketId, const std::string &status);
    double calculateTotalFares();
    void printReports();
};

#endif // TICKETSYSTEM_H