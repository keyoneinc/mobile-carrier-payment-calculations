//
// Created by Yaroslav! on 18/07/2024.
//

#include "LocalCalls.h"

LocalCalls::LocalCalls(string lastName, string firstName, string middleName, string address, string city,
    string passportData, double rate, int durationInMinutes, double totalPayment, string month, int year)
: SubscriberFee(lastName, firstName, middleName, address, city, passportData)
{
    this->rate = rate;
    this->durationInMinutes = durationInMinutes;
    this->totalPayment = totalPayment;
    this->month = month;
    this->year = year;
}

void LocalCalls::setRate(double rate)
{
    this->rate = rate;
}

void LocalCalls::setDurationInMinutes(int durationInMinutes)
{
    this->durationInMinutes = durationInMinutes;
}

void LocalCalls::setTotalPayment(double totalPayment)
{
    this->totalPayment = totalPayment;
}

void LocalCalls::setMonth(string month)
{
    this->month = month;
}

void LocalCalls::setYear(int year)
{
    this->year = year;
}

double LocalCalls::getRate() const
{
    return rate;
}

int LocalCalls::getDurationInMinutes() const
{
    return durationInMinutes;
}

double LocalCalls::getTotalPayment() const
{
    return totalPayment;
}

string LocalCalls::getMonth() const
{
    return month;
}

int LocalCalls::getYear() const
{
    return year;
}

void LocalCalls::displayInfo() const
{
    SubscriberFee::displayInfo();
    cout << "Local Call" << endl;
    cout << "Rate: " << rate << endl;
    cout << "Duration: " << durationInMinutes << " minutes" << endl;
    cout << "Total Payment: " << totalPayment << endl;
    cout << "Date: " << month << " " << year << endl;
}

ostream& operator<<(ostream& os, const LocalCalls& call)
{
    call.displayInfo();
    return os;
}
