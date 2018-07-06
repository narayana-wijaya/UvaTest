//
//  Nlogonia.cpp
//  UvaTest
//
//  Created by Narayana Wijaya on 17/05/18.
//  Copyright © 2018 Nara. All rights reserved.
//

#include <iostream>
#include "Nlogonia.hpp"

using namespace std;

Nlogonia::Nlogonia() {
    int TC, N, M, x, y;
    cin >> TC;
    while(TC != 0) {
        cin >> N >> M;
        for (int i = 0; i < TC; i++) {
            cin >> x >> y;
            if (x > N && y > M) {
                cout << "NE";
            } else if (x < N && y > M) {
                cout << "NO";
            } else if (x > N && y < M) {
                cout << "SE";
            } else if (x < N && y < M) {
                cout << "SO";
            } else {
                cout << "divisa";
            }
            cout << endl;
        }
        cin >> TC;
    }
};
