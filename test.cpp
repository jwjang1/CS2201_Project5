// File name: DblStack.cpp
// Name: Jungwon Jang
// VUnetid: jangj1
// Email: jungwon.jang@vanderbilt.edu
// Class: 2201-03
// Assignment Number: 5
// Honor statement: I have not given or received unauthorized aid on this assignment.
// Description:
// This program tests the DblStack class.

#include <iostream>
#include <string>
#include <cstdlib>
#include "Stack_t.h"

int main() {
    std::cout << "Testing DblStack..." << std::endl;

    Stack ds1;   // create an empty Stack object via default ctor

    if (!ds1.isEmpty()) {
        std::cout << "Default ctor did not produce an empty DblStack" << std::endl;
    }
    if (ds1.size() != 0) {
        std::cout << "Default ctor failed to create an empty DblStack" << std::endl;
        std::cout << "Reported that " << ds1.size() << " stacks exist" << std::endl;
    }

    ds1.push(23.5);//first item added
    if (ds1.isEmpty()) {
        std::cout << "failed to push item" << std::endl;
    }
    if (ds1.top() != 23.5) {
        std::cout << "Wrong item" << std::endl;
        std::cout << "Item returned: " << ds1.top() << std::endl;
    }
    if (ds1.size() != 1) {
        std::cout << "Wrong size" << std::endl;
        std::cout << "Reported that " << ds1.size() << " stacks exist" << std::endl;
    }
    ds1.push(40);//second item added
    if (ds1.isEmpty()) {
        std::cout << "failed to push item" << std::endl;
    }
    if (ds1.top() != 40) {
        std::cout << "Wrong item" << std::endl;
        std::cout << "Item returned: " << ds1.top() << std::endl;
    }
    if (ds1.size() != 2) {
        std::cout << "Wrong size" << std::endl;
        std::cout << "Reported that " << ds1.size() << " stacks exist" << std::endl;
    }

    ds1.push(55.7);//third item added
    if (ds1.isEmpty()) {
        std::cout << "failed to push item" << std::endl;
    }
    if (ds1.top() != 55.7) {
        std::cout << "Wrong item" << std::endl;
        std::cout << "Item returned: " << ds1.top() << std::endl;
    }
    if (ds1.size() != 3) {
        std::cout << "Wrong size" << std::endl;
        std::cout << "Reported that " << ds1.size() << " stacks exist" << std::endl;
    }

    ds1.pop(); //testing pop()
    if (ds1.top() != 40) {
        std::cout << "Failed to pop" << std::endl;
        std::cout << "Item returned: " << ds1.top() << std::endl;
    }
    if (ds1.size() != 2) {
        std::cout << "Wrong size" << std::endl;
        std::cout << "Reported that " << ds1.size() << " stacks exist" << std::endl;
    }

    Stack ds2;
    ds2 = ds1; //testing copy ctor
    if (ds2.top() != 40) {
        std::cout << "Failed to pop" << std::endl;
        std::cout << "Item returned: " << ds2.top() << std::endl;
    }
    if (ds2.size() != 2) {
        std::cout << "Wrong size" << std::endl;
        std::cout << "Reported that " << ds2.size() << " stacks exist" << std::endl;
    }

    Stack ds3(ds1);//testing assignment operator
    if (ds3.top() != 40) {
        std::cout << "Failed to pop" << std::endl;
        std::cout << "Item returned: " << ds3.top() << std::endl;
    }
    if (ds3.size() != 2) {
        std::cout << "Wrong size" << std::endl;
        std::cout << "Reported that " << ds3.size() << " stacks exist" << std::endl;
    }
}