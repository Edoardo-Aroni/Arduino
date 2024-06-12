// Online C++ compiler to run C++ program online
#include <iostream>

int main() {
  // 2x3 array of integers
  int data[2][3] = {{1, 2, 3}, {4, 5, 6}};

  // Loop through each row and column
  for (int i = 0; i < 2; ++i) {
    for (int j = 0; j < 3; ++j) {
      std::cout << data[i][j] << " ";
    }
    std::cout << std::endl;  // Move to the next line after each row
  }

  return 0;
}

// second method

// Online C++ compiler to run C++ program online
#include <iostream>
#include <array>

int main() {
   // Define an array of arrays
    std::array<std::array<int, 3>, 3> array_of_arrays = {{
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    }};

    // Loop through the array of arrays using range-based for loop
    for (const auto& inner_array : array_of_arrays) {
        for (int element : inner_array) {
            std::cout << element << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}