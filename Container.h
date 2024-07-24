//
// Created by kcryeone on 7/22/2024.
//

#include "vector"
#include "algorithm"
#include "memory"
#include "SubscriberFee.h"

class Container {
private:
    vector<shared_ptr<SubscriberFee>> fees;
public:
    void add(const shared_ptr<SubscriberFee>& fee);
    void remove(const shared_ptr<SubscriberFee>& fee);
    void edit(const shared_ptr<SubscriberFee>& oldFee, shared_ptr<SubscriberFee>& newFee);

    void displayAll() const;

};
