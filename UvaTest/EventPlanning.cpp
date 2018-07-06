//
//  EventPlanning.cpp
//  UvaTest
//
//  Created by Narayana Wijaya on 23/05/18.
//  Copyright © 2018 Nara. All rights reserved.
//
#include <iostream>
#include "EventPlanning.hpp"

using namespace std;

EventPlanning::EventPlanning() {
    int participant, numberOfHotel, numberOfWeeks, bed;
    int budget, hotelPrice;
    
    while (scanf("%d %d %d %d\n", &participant, &budget, &numberOfHotel, &numberOfWeeks) != EOF) {
        int totalCost = budget+1;
        while (numberOfHotel--) {
            cin >> hotelPrice;
            int i = 0;
            while (i < numberOfWeeks) {
                cin >> bed;
                if (hotelPrice * participant <= totalCost && bed >= participant) {
                    totalCost = participant * hotelPrice;
                    string s;
                    getline(cin, s);
                    break;
                }
                i++;
            }
        }
        
        if (totalCost <= budget) {
            cout << totalCost << endl;
        } else {
            cout << "stay home" << endl;
        }
        
    }
};
