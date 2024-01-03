//
// Created by ykwang on 2023/12/30.
//

#include "MutilThread_Singleton.h"
#include "Singleton.h"
#include "Observer_Mode.h"
#include "Strategy_Mode.h"

int main() {
//------------Observe Mode----------------
//    Concrete_Object object;
//    Concrete_Observer observerA;
//    Concrete_Observer observerB;
//    object.addObserver(observerA);
//    object.addObserver(observerB);
//
//    object.notify();

//------------Strategy Mode----------------
    TravelByBike  travelByBike;
    TravelByCar   travelByCar;
    TravelByTruck travelByTruck;

    auto travelStrategy = new TravelByTruck();
    TravelContext context(&travelByBike);
    context.performStrategy();
    context.setStrategy(&travelByCar);
    context.performStrategy();
    context.setStrategy(&travelByTruck);
    context.performStrategy();
    context.setStrategy(travelStrategy);
    context.performStrategy();

    return 0;
}