    //
    //  main.cpp
    //  UvaTest
    //
    //  Created by Narayana Wijaya on 12/05/18.
    //  Copyright © 2018 Nara. All rights reserved.
    //

#include <stdio.h>
#include <iostream>
#include <map>
#include <cmath>

using namespace std;

int main()
{
    int gridSize, value;
    string direction, leftDir;
    
    cin >> gridSize >> value;
    
    map<int, map<int, int>> grid;
    
    while (gridSize != 0 && value != 0) {
        int centerX = (gridSize+1) / 2;
        int centerY = centerX;
        
        if (value == 1) {
            cout << "Line = " << centerX << ", column = " << centerY << "." << endl;
        } else if (value == pow(gridSize, 2)) {
            cout << "Line = " << gridSize << ", column = " << gridSize << "." << endl;
        } else if (value > pow(gridSize, 2)) {
            cout << "Value is beyond grid size please enter a smaller value" << endl;
        } else if (gridSize % 2 == 0) {
            cout << "grid size must an odd number" << endl;
        } else {
        //find closest x
            int rootValue = (int) sqrt(value);
            
        //compare to upper value to find closer value
            if (pow(rootValue+1, 2) - value < value - pow(rootValue, 2)) {
                rootValue = rootValue + 1;
            }
            
            cout << rootValue << endl;
            
            int xToCenter = rootValue/2;
            int currentValue = pow(rootValue, 2);
        //get coordinate of closer value
            int stepToValue = value - currentValue;
            int currentX;
            int currentY;
            
            if (rootValue % 2 == 0) {
                currentX = centerX - xToCenter;
                currentY = currentX + 1;
            } else {
                currentX = centerX + xToCenter;
                currentY = currentX;
            }
            
            cout << "Start point at x: " << currentX << ", and y: " << currentY << endl;
            int distanceToValue = value - pow(rootValue, 2);
            int turningPointX;
            
        //get direction
            if (currentValue % 2 == 0 && stepToValue < 0) { //+x and +y
                turningPointX = 2*centerX - currentX;
            }
            if (currentValue % 2 == 0 && stepToValue > 0) { //-x turn +y
                turningPointX = currentY;
            }
            if (currentValue % 2 != 0 && stepToValue < 0) { //-x turn -y
                turningPointX = 2*centerY - currentY;
                
            }
            if (currentValue % 2 != 0 && stepToValue > 0) { //x+1 turn -y
                currentValue = currentValue + 1;
                currentX = currentX+1;
                while (currentValue != value) {
                    currentValue += 1;
                    currentY -= 1;
                }
            }
            
        /*
            start search, if
        */
            
//            if (rootValue % 2 == 0) {
//                if (rootValue*rootValue > value) {
//                    rootValue = rootValue + 1;
//                } else {
//                    rootValue = rootValue - 1;
//                }
//            }
//
//            int belowRootValue = 2*xToCenter + 1;
//            int upperRootValue = 2*(xToCenter+1) + 1;
//
//            int belowValue = belowRootValue * belowRootValue;
//            int upperValue = upperRootValue * upperRootValue;
            
            // find the shortest another pow value to value
            
//            int distanceBelowValue = value - belowValue;
//            int distanceAboveValue = upperValue - value;
//            
//            int distance = min(distanceAboveValue, distanceAboveValue);
//            int startPointY = centerY + pointToCenter;
//            int startPointX = centerX + pointToCenter;
            
//            cout << startPointX << endl;

            
        }
        cin >> gridSize >> value;
    }
    cout << endl;
    return 0;
}





    //            int i = 1;
    //            direction = "r";
    //            grid[line][column] = i;
    //            while (i < value) {
    //                i += 1;
    //                if (direction == "u") {
    //                    if (grid[line][column-1] == 0) {
    //                        direction = "l";
    //                        column -= 1;
    //                    } else {
    //                        line += 1;
    //                    }
    //                } else if (direction == "l") {
    //                    if (grid[line-1][column] == 0) {
    //                        direction = "d";
    //                        line -= 1;
    //                    } else {
    //                        column -= 1;
    //                    }
    //                } else if (direction == "d") {
    //                    if (grid[line][column+1] == 0) {
    //                        direction = "r";
    //                        column += 1;
    //                    } else {
    //                        line -= 1;
    //                    }
    //                } else if (direction == "r") {
    //                    if (grid[line+1][column] == 0) {
    //                        direction = "u";
    //                        line += 1;
    //                    } else {
    //                        column += 1;
    //                    }
    //                } else {
    //                    printf("nothing else");
    //                }
    //
    //                grid[line][column] = i;
    //            }
    //            cout << "Line = " << line << ", column = " << column << "." << endl;
    //            grid.clear();
