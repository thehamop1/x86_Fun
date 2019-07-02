#include <iostream>

int main(){
  int first_number=1234, second_number=5, storage;
  __asm(
        "movl %1,%%eax;" 
        "imul %2,%%eax;"
        "movl %%eax,%0;"
        :"=r" (storage)
        :"r" (first_number), "r" (second_number)
        :"%eax"
    );
  std::cout << storage << std::endl;
  return 0;
}
