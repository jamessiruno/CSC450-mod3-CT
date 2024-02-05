#include <iostream>

int main() {
    // Declare variables
    int value1, value2, value3;

    // Get input from the user
    std::cout << "Enter three integer values: ";
    std::cin >> value1 >> value2 >> value3;

    // Create integer pointers and allocate dynamic memory
    int *ptr1 = new int(value1);
    int *ptr2 = new int(value2);
    int *ptr3 = new int(value3);

    // Display contents of variables and pointers
    std::cout << "\nContents of variables:\n";
    std::cout << "Value1: " << value1 << std::endl;
    std::cout << "Value2: " << value2 << std::endl;
    std::cout << "Value3: " << value3 << std::endl;

    std::cout << "\nContents of pointers:\n";
    std::cout << "Pointer1: " << *ptr1 << std::endl;
    std::cout << "Pointer2: " << *ptr2 << std::endl;
    std::cout << "Pointer3: " << *ptr3 << std::endl;

    // Deallocate dynamic memory using delete operator
    delete ptr1;
    delete ptr2;
    delete ptr3;

    return 0;
}
