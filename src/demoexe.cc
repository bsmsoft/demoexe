#include <iostream>
#include <cstdlib>

#include "demolib2.h"

int main(int argc, char* argv[]) {
    std::cout << argc << ": " << argv[0] << " " << argv[1] << std::endl;
    if (argc != 2) {
        std::cerr << "Should be one argument!" << std::endl;
        return 1;
    }
    int n = atoi(argv[1]);
    demo_lib2_print_fibonacci(n);
    return 0;
}
