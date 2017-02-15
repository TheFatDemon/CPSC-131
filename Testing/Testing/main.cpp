//
//  main.cpp
//  Testing
//
//  Created by Mario Personal on 2/9/17.
//  Copyright © 2017 Mario's Tech. All rights reserved.
//

#include <iostream>

using namespace std;

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
        for (int i = 0; i < nScores; i ++) {
            cout << score[i] << endl;
        }
    }
private:
    int * score;
    int nScores;
};

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
    // using integer data type
    int arraya[5] = { 1, 2, 3, 4, 5 };
   	GenericArray<int> a(arraya, 5);
   	a.print();
   	// using float data type
   	float arrayb[5] = { 1.012, 2.324, 3.141, 4.221, 5.327 };
   	GenericArray<float> b(arrayb, 5);
   	b.print();
   	// using string data type
   	string arrayc[] = { "Ch1", "Ch2", "Ch3", "Ch4", "Ch5" };
   	GenericArray<string> c(arrayc, 5);
   	c.print();
   	return 0;
}
