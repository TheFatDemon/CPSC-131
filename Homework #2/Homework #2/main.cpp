//
//  main.cpp
//  Homework #2
//
//  Created by Mario Personal on 2/14/17.
//  Copyright © 2017 Mario's Tech. All rights reserved.
//

#include <iostream>


// Answer for #1
class MyScores {
public:
    MyScores() {
        score = new int;
        nScores = 0;
    }
    
    void addScore(int newScore) {
        score[nScores] = newScore;
        nScores++;
    }
    
    void printScores() {
        for (int i = 0; i < nScores; i++) {
            cout << score[i] << endl;
        }
    }
private:
    int * score;
    int nScore;
};


int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
