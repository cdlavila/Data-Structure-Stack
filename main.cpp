//
// Created by Carlos Daniel on 27/01/2021.
//

#include <iostream>
#include "Stack.h"
using namespace std;

int main(){
    Stack<int> numbers;

    // Inserting into stack
    for (int i = 1; i <= 10; ++i) {
        numbers.push(i);
    }

    // Printing the stack
    cout << "[";
    while (numbers.size() > 1){
        cout << numbers.top() <<", ";
        numbers.pop();
    }
    cout << numbers.top() << "]";
}
