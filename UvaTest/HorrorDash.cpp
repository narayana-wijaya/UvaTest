//
//  HorrorDash.cpp
//  UvaTest
//
//  Created by Narayana Wijaya on 26/05/18.
//  Copyright © 2018 Nara. All rights reserved.
//

#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>
#include "HorrorDash.hpp"

using namespace std;

HorrorDash::HorrorDash() {
    int T, N, c;
    vector<int> results;
    
    cin >> T;
    while (T--) {
        int result = 0;
        int i = 1;
        cin >> N;
        while (i <= N) {
            cin >> c;
            if (c > result) {
                result = c;
            }
            i++;
        }
        results.push_back(result);
    }
    
    for (auto i = results.begin(); i != results.end(); i++) {
        cout << "Case " << i - results.begin() + 1 << ": " << *i << endl;
    }
    
    cin >> T;
}
