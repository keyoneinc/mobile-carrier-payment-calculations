//
// Created by Yaroslav! on 18/07/2024.
//
#pragma once
#include "iostream"
#include "string"
using namespace std;

class SubscriberFee {
protected:
    string lastName;
    string firstName;
    string middleName;
    string address;
    string city;
    string passportData;
public:
    SubscriberFee(string lastName, string firstName, string middleName, string address, string city, string passportData);
    virtual ~SubscriberFee();

    void setLastName(string lastName);
    void setFirstName(string firstName);
    void setMiddleName(string middleName);
    void setAddress(string address);
    void setCity(string city);
    void setPassportData(string passportData);

    string getLastName() const;
    string getFirstName() const;
    string getMiddleName() const;
    string getAddress() const;
    string getCity() const;
    string getPassportData() const;

    virtual void displayInfo() const;

};