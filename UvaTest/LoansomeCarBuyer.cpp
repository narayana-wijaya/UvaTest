//
//  LoansomeCarBuyer.cpp
//  UvaTest
//
//  Created by Narayana Wijaya on 12/05/18.
//  Copyright © 2018 Nara. All rights reserved.
//

#include <iostream>
#include <map>
#include "LoansomeCarBuyer.hpp"

using namespace std;

LoansomeCarBuyer::LoansomeCarBuyer() {
    int duration, deprNumber, deprMonth, month;
    float dp, loan, deprPercent, carValue;
    
    cin >> duration >> dp >> loan >> deprNumber;
    while (duration > 0) {
        double deprList[duration];
        
        while(deprNumber--) {
            cin >> deprMonth >> deprPercent;
            while (deprMonth < duration) {
                deprList[deprMonth] = deprPercent;
                deprMonth++;
            }
        }
        
        float monthlyPayment = loan / duration;
        month = 0;
        carValue = (loan + dp) * (1 - deprList[month]);
        while (carValue < loan) {
            month++;
            carValue = carValue - (carValue * deprList[month]);
            loan = loan - monthlyPayment;
        }
        
        string text;
        text = month == 1 ? " month" : " months";
        cout << month << text << endl;
        
        cin >> duration >> dp >> loan >> deprNumber;
    }

};
