//ELEC/XJEL2645
// Dr Craig A. Evans and Dr Tim J. Amsdon

#include <iostream>
#include "funcs.h"

int main() {
  // print a random number
  int random_value = get_random_number(0,100);
  std::cout << "Random number = " << random_value << std::endl;
  
  // create array and initialise
  int array[5] = {1, 2, 3, 4, 5};
  // pass the array to the function (and its size) so we can calculate the sum
  int sum = sum_of_array(array, 5);
  std::cout << "Sum = " << sum << std::endl;
  // now pass to a function to square each value
  square_array(array, 5);
  for (int i = 0; i < 5; i++) {
    array[i] = get_random_number(0,100);
    std::cout << "array[" << i << "] = " << array[i] << std::endl;
  }
  // calculate the new sum
  sum = sum_of_array(array, 5);
  std::cout << "New sum = " << sum << std::endl;

  int min_value = get_min_value(array,5);
  std::cout << "Minimum value = " << min_value << "\n";

  //Task 1 
  int n = 20;
  int *ptr = new int[n];
  for(int i = 0; i < n; i++){
     *(ptr + i) = get_random_number(0,100);
      std::cout << *(ptr + i) << std::endl;
  }
  

  int min_value_new = get_min_value(ptr, 20);
  int max_value_new = get_max_value(ptr, 20);

  int no_of_7s = get_no_spec(ptr, 20, 7);
  std::cout << "The number of 7s in the array are: " << no_of_7s << std::endl;


  delete[] ptr;
  ptr = nullptr;

}
