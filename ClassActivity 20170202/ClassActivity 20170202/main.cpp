//
//  main.cpp
//  ClassActivity 20170202
//
//  Created by Mario Personal on 2/2/17.
//  Copyright © 2017 Mario's Tech. All rights reserved.
//

#include <iostream>

using namespace std;

const int numberOfScores = 4;

int getMax(int[]);

int main(int argc, const char * argv[]) {
    int scores[numberOfScores];
    cout << "Input " << numberOfScores << " scroes" << endl;
    for (int i = 0; i < numberOfScores; i++) {
        cin >> scores[i];
    }
    
    cout << "Max = " << getMax(scores) << endl;
    return 0;
}

int getMax(int scores[]) {
    int max = 0;
    for (int i = 0; i < numberOfScores; i++) {
        if (max < scores[i]) {
            max = scores[i];
        }
    }
    return max;
}
