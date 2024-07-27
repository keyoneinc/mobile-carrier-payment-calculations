//
// Created by kcryeone on 7/22/2024.
//

#include "Container.h"


void Container::add(const shared_ptr<SubscriberFee> &fee) {
    fees.push_back(fee);
}

void Container::remove(const shared_ptr<SubscriberFee> &fee) {
    auto it = find(fees.begin(), fees.end(), fee);
    if (it != fees.end()) {
        fees.erase(it);
    }
}

void Container::edit(const shared_ptr<SubscriberFee> &oldFee, const shared_ptr<SubscriberFee> &newFee) {
    auto it = find(fees.begin(), fees.end(), oldFee);
    if(it != fees.end()) {
        fees.erase(it);
    }
}

void Container::displayAll() const {
    for (auto& fee : fees) {
        cout << *fee << endl;
    }
}




