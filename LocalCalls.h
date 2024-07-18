//
// Created by Yaroslav! on 18/07/2024.
//
#pragma once
#include "iostream"
#include "string"
#include "SubscriberFee.h"
using namespace std;


class LocalCalls : public SubscriberFee {
private:
    double rate;
    int durationInMinutes;
    double totalPayment;
    string month;
    int year;
public:
    LocalCalls(string lastName, string firstName, string middleName, string address, string city, string passportData,
           double rate, int durationInMinutes, double totalPayment, string month, int year);

    void setRate(double rate);
    void setDurationInMinutes(int durationInMinutes);
    void setTotalPayment(double totalPayment);
    void setMonth(string month);
    void setYear(int year);

    double getRate() const;
    int getDurationInMinutes() const;
    double getTotalPayment() const;
    string getMonth() const;
    int getYear() const;

    void displayInfo() const override;


};

