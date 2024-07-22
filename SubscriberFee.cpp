//
// Created by Yaroslav! on 18/07/2024.
//

#include "SubscriberFee.h"

SubscriberFee::SubscriberFee(string lastName, string firstName, string middleName, string address, string city,
                             string passportData) {
    this->lastName = lastName;
    this->firstName = firstName;
    this->middleName = middleName;
    this->address = address;
    this->city = city;
    this->passportData = passportData;
    count++;

}

SubscriberFee::~SubscriberFee() {
    count--;
}

void SubscriberFee::setLastName(string lastName) {
    this->lastName = lastName;
}

void SubscriberFee::setFirstName(string firstName) {
    this->firstName = firstName;
}

void SubscriberFee::setMiddleName(string middleName) {
    this->middleName = middleName;
}

void SubscriberFee::setAddress(string address) {
    this->address = address;
}

void SubscriberFee::setCity(string city) {
    this->city = city;
}

void SubscriberFee::setPassportData(string passportData) {
    this->passportData = passportData;
}

string SubscriberFee::getLastName() const {
    return lastName;
}

string SubscriberFee::getFirstName() const {
    return firstName;
}

string SubscriberFee::getMiddleName() const {
    return middleName;
}

string SubscriberFee::getAddress() const {
    return address;
}

string SubscriberFee::getCity() const {
    return city;
}

string SubscriberFee::getPassportData() const {
    return passportData;
}

void SubscriberFee::displayInfo() const {
    cout << "Subscriber: " << lastName << " " << firstName << " " << middleName << endl;
    cout << "Address: " << address << ", " << city << endl;
    cout << "Passport Data: " << passportData << endl;

}

int SubscriberFee::getCount()
{
    return count;
}

ostream& SubscriberFee::operator<<(ostream& os, const SubscriberFee& fee)
{
    fee.displayInfo();
    return os;
}




