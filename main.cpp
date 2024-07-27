#include <iostream>
#include "SubscriberFee.h"
#include "InternationalCalls.h"
#include "LocalCalls.h"
#include "InternetConnection.h"
#include "Container.h"

int main() {
    Container container;

    auto subscriber1 = make_shared<InternationalCalls>("Doe", "John", "Michael", "1 Street", "Kharkiv", "AZ322881", "USA", "NewYork", 10, 0.5, 5.0, "June", 2024);
    auto subscriber2 = make_shared<LocalCalls>("Smith", "Jane", "Anne", "2 Street", "Kharkiv", "AX124134", 0.2, 30, 6.0, "July", 2024);
    auto subscriber3 = make_shared<InternetConnection>("Brown", "Alice", "Marie", "3 Street", "Kyiv", "AN238088", "Fiber", 100, 50.0, "August", 2024);

    container.add(subscriber1);
    container.add(subscriber2);
    container.add(subscriber3);

    container.displayAll();

    container.remove(subscriber1);
    cout << "\nAfter removing subscriber1:\n";
    container.displayAll();

    auto updatedSubscriber2 = make_shared<LocalCalls>("Smith", "Jane", "Anne", "2 Street", "Kharkiv", "AX124134", 0.3, 45, 13.5, "July", 2024);
    container.edit(subscriber2, updatedSubscriber2);
    cout << "\nAfter editing subscriber2:\n";
    container.displayAll();

    cout << "\nTotal number of SubscriberFee objects: " << SubscriberFee::getCount() << endl;

    return 0;
}
