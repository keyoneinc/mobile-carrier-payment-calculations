//
// Created by Yaroslav! on 19/07/2024.
//

#include "InternetConnection.h"

InternetConnection::InternetConnection(string lastName, string firstName, string middleName, string address,
                                       string city, string passportData, string connectionName, double providedVolume,
                                       double totalPayment, string month, int year)
                                       : SubscriberFee(lastName, firstName, middleName, address, city, passportData) {
    this->connectionName = connectionName;
    this->providedVolume = providedVolume;
    this->totalPayment = totalPayment;
    this->month = month;
    this->year = year;
}

void InternetConnection::setConnectionName(string connectionName) {
    this->connectionName = connectionName;
}

void InternetConnection::setProvidedVolume(double providedVolume) {
    this->providedVolume = providedVolume;
}

void InternetConnection::setTotalPayment(double totalPayment) {
    this->totalPayment = totalPayment;
}

void InternetConnection::setMonth(string month) {
    this->month = month;
}

void InternetConnection::setYear(int year) {
    this->year = year;
}

string InternetConnection::getConnectionName() const {
    return connectionName;
}

double InternetConnection::getProvidedVolume() const {
    return providedVolume;
}

double InternetConnection::getTotalPayment() const {
    return totalPayment;
}

string InternetConnection::getMonth() const {
    return month;
}

int InternetConnection::getYear() const {
    return year;
}

void InternetConnection::displayInfo() const {
    SubscriberFee::displayInfo();
    cout << "Connection name: " << connectionName << endl;
    cout << "Provided volume: " << providedVolume << endl;
    cout << "Total payment: " << totalPayment << endl;
    cout << "Date: " << month << "." << year << endl;
}

ostream& InternetConnection::operator<<(ostream& os, const InternetConnection& connection)
{
    connection.displayInfo();
    return os;
}


