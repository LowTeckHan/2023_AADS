#include <iostream>
#include "Heap.tpp"

int main() {
  // Create a heap of integers
  Heap<int> heap;

  // Insert elements into the heap
  heap.insert(10);
  heap.insert(30);
  heap.insert(20);
  heap.insert(5);
  heap.insert(15);

  // Get the minimum value from the heap
  int min = heap.getMin();
  std::cout << "Minimum value: " << min << std::endl;

  // Remove an element from the heap
  heap.remove(10);

  // Get the new minimum value
  min = heap.getMin();
  std::cout << "New minimum value: " << min << std::endl;

  return 0;
}