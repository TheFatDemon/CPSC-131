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

// Answer for #2
template <typename MYTYPE>
class GenericArray {
public:
    GenericArray(MYTYPE array[], int arraySize) {
        ptr = new MYTYPE;
        for (int i = 0; i < arraySize; i++) {
            ptr[i] = array[i];
        }
        size = arraySize;
    }
    
    ~GenericArray() {
        delete ptr;
    }
    
    void print() {
        for (int i = 0; i < size; i++) {
            cout << ptr[i] << endl;
        }
    }
    
private:
    MYTYPE *ptr;
    int size;
};


int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
