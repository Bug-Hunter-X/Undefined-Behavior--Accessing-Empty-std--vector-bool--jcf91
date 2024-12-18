#include <iostream>
#include <vector>

int main() {
  std::vector<bool> vec;

  // Check for emptiness before accessing elements
  if (!vec.empty()) {
    bool b = vec[0];
    std::cout << "First element: " << b << std::endl;
  } else {
    std::cout << "Vector is empty!" << std::endl;
  }

  try {
    bool c = vec.at(0); 
    std::cout << "First element (at): " << c << std::endl; 
  } catch (const std::out_of_range& oor) {
    std::cerr << "Out of Range error: " << oor.what() << '\n';
  }

  return 0;
}
