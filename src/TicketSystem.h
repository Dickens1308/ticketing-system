#ifndef TICKETSYSTEM_H
#define TICKETSYSTEM_H

#include <string>
#include <vector>
#include <iostream>

template <typename T, typename U, typename V>
class TicketSystem {
private:
    T ticketId;
    U fareAmount;
    V passengerType;
    V journeyDate;
    V routeInfo;
    U totalFare;
    std::vector<TicketSystem<T, U, V>> tickets;

public:
    // Constructor
    TicketSystem(T ticketId, U fareAmount, V passengerType, V journeyDate, V routeInfo)
        : ticketId(ticketId), fareAmount(fareAmount), passengerType(passengerType), journeyDate(journeyDate), routeInfo(routeInfo) {}

    // Getters
    T getTicketId() const { return ticketId; }
    U getFareAmount() const { return fareAmount; }
    V getPassengerType() const { return passengerType; }
    V getJourneyDate() const { return journeyDate; }
    V getRouteInfo() const { return routeInfo; }
    U getTotalFare() const { return totalFare; }
    std::vector<TicketSystem<T, U, V>> getTickets() const { return tickets; }

    // Musa
    bool validateInputData(T ticketId, U fareAmount, const V &passengerType, const V &journeyDate, const V &routeInfo);
    U calculateTotalFare(U fareAmount, const V &passengerType);
    U applyDiscounts(U fareAmount, const V &passengerType);
    T generateUniqueId();
    void storeTicketInformation(T ticketId, U fareAmount, const V &passengerType, const V &journeyDate, const V &routeInfo, U totalFare);
    void printTicketDetails(T ticketId);
    void showErrorMessages(const V &error);

    // Dickens
    void displayValidationStatus(bool status);
    void generateReports();
    void createNewTicket();
    void updateTicketStatus(T ticketId, const V &status);
    U calculateTotalFares();
    void printReports();
};

#endif // TICKETSYSTEM_H