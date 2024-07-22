//
// Created by Yaroslav! on 18/07/2024.
//

#include "InternationalCalls.h"

InternationalCalls::InternationalCalls(string lastName, string firstName, string middleName, string address,
                                       string city, string passportData, string country, string callCity,
                                       int durationInMinutes, double price, double totalPayment, string month,
                                       int year)
                                       : SubscriberFee(lastName, firstName, middleName, address, city, passportData) {
    this->country = country;
    this->callCity = callCity;
    this->durationInMinutes = durationInMinutes;
    this->price = price;
    this->totalPayment = totalPayment;
    this->month = month;
    this->year = year;
}

void InternationalCalls::setCountry(string country) {
    this->country = country;
}

void InternationalCalls::setCallCity(string callCity) {
    this->callCity = callCity;
}

void InternationalCalls::setDurationInMinutes(int durationInMinutes) {
    this->durationInMinutes = durationInMinutes;
}

void InternationalCalls::setPrice(double price) {
    this->price = price;
}

void InternationalCalls::setTotalPayment(double totalPayment) {
    this->totalPayment = totalPayment;
}

void InternationalCalls::setMonth(string month) {
    this->month = month;
}

void InternationalCalls::setYear(int year) {
    this->year = year;
}

string InternationalCalls::getCountry() const {
    return country;
}

string InternationalCalls::getCallCity() const {
    return callCity;
}

int InternationalCalls::getDurationInMinutes() const {
    return durationInMinutes;
}

double InternationalCalls::getPrice() const {
    return price;
}

double InternationalCalls::getTotalPayment() const {
    return  totalPayment;
}

string InternationalCalls::getMonth() const {
    return month;
}

int InternationalCalls::getYear() const {
    return year;
}

void InternationalCalls::displayInfo() const {
    SubscriberFee::displayInfo();
    cout << "International call to: " << country << ", " << callCity << endl;
    cout << "Duration in minutes: " << durationInMinutes << endl;
    cout << "Price per minute: " << price << endl;
    cout << "Total payment: " << totalPayment << endl;
    cout << "Date: " << month << "." << year << endl;
}

ostream& operator<<(ostream& os, const InternationalCalls& call)
{
    call.displayInfo();
    return os;
}
