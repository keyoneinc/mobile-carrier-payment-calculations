//
// Created by Yaroslav! on 18/07/2024.
//
#pragma once
#include "iostream"
#include "string"
#include "SubscriberFee.h"
using namespace std;

class InternationalCalls : public SubscriberFee {
private:
    string country;
    string callCity;
    int durationInMinutes;
    double price;
    double totalPayment;
    string month;
    int year;
public:
    InternationalCalls(string lastName, string firstName, string middleName, string address, string city, string passportData,
                       string country, string callCity, int durationInMinutes, double price, double totalPayment,
                       string month, int year);

    void setCountry(string country);
    void setCallCity(string callCity);
    void setDurationInMinutes(int durationInMinutes);
    void setPrice(double price);
    void setTotalPayment(double totalPayment);
    void setMonth(string month);
    void setYear(int year);

    string getCountry() const;
    string getCallCity() const;
    int getDurationInMinutes() const;
    double getPrice() const;
    double getTotalPayment() const;
    string getMonth() const;
    int getYear() const;

    void displayInfo() const override;

};