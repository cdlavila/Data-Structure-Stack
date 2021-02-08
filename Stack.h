#ifndef __Stack_H
#define __Stack_H

// Data structure Stack

#include <iostream>
#include <list>
using namespace std;

template <typename T>

class Stack {
  // Attributes
 private:
  list<T> storage;

 public:
  // Constructor
  Stack() : storage() {}

  ~Stack() = default;

  // Return stack size
  unsigned int size() const { return storage.size(); }

  // Insert an element into the stack
  void push(const T& e) { storage.push_front(e); }

  // Remove an element from the stack
  void pop() { storage.pop_front(); }

  // Return stack top
  T top() const { return storage.front(); }

  // Evaluate if the stack is empty
  bool empty() const { return storage.empty(); }
};
#endif
