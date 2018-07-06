//
//  Newspaper.cpp
//  UvaTest
//
//  Created by Narayana Wijaya on 15/06/18.
//  Copyright © 2018 Nara. All rights reserved.
//

#include <iostream>
#include <string>
#include <map>
#include <iomanip>
#include "Newspaper.hpp"

using namespace std;

Newspaper::Newspaper() {
    clock_t tStart = clock();
    int TC, line, value, pgrphLine;
    char chr;
    string str;
    map<char, int> mapper;
    
    double paidInCent;
    cin >> TC;
    while (TC--) {
        paidInCent = 0;
        
        cin >> line;
        for (int i = 0; i < line; i++) {
            cin >> chr >> value;
            mapper[chr] = value;
        }
        
        cin >> pgrphLine;
        for (int i = 0; i <= pgrphLine; i++) {
            getline(cin, str);
            for (int s = 0; s < str.length(); s++) {
                paidInCent += mapper[str[s]];
            }
        }
        paidInCent /= 100;
        printf("%0.2lf$\n", paidInCent);
        printf("Time taken: %.2fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
    }
}
