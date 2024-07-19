//
// Created by Yaroslav! on 19/07/2024.
//
#pragma once
#include "iostream"
#include "string"
#include "SubscriberFee.h"
using namespace std;

class InternetConnection : public SubscriberFee {
private:
    string connectionName;
    double providedVolume;
    double totalPayment;
    string month;
    int year;

public:
    InternetConnection(string lastName, string firstName, string middleName, string address, string city, string passportData,
                       string connectionName, double providedVolume, double totalPayment, string month, int year);

    void setConnectionName(string connectionName);
    void setProvidedVolume(double providedVolume);
    void setTotalPayment(double totalPayment);
    void setMonth(string month);
    void setYear(int year);

    string getConnectionName() const;
    double getProvidedVolume() const;
    double getTotalPayment() const;
    string getMonth() const;
    int getYear() const;

    void displayInfo() const override;


};


