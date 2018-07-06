    //
    //  CostCutting.cpp
    //  UvaTest
    //
    //  Created by Narayana Wijaya on 12/05/18.
    //  Copyright © 2018 Nara. All rights reserved.
    //
#include <iostream>
#include <vector>
#include <algorithm>
#include "CostCutting.hpp"

using namespace std;

CostCutting::CostCutting() {
    int TC, a, b, c, index;
    cin >> TC;
    vector<int> results;
    index = 0;
    while(TC--) {
        index++;
        scanf("%d %d %d", &a, &b, &c);
        int arr[3] = {a, b, c};
        sort(arr, arr+3);
        
        cout << "Case " << index << ": " << arr[1] << endl;
    }
    cin >> TC;
};
