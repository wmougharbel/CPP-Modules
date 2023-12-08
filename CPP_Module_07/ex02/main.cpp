#include "Array.hpp"

class Test
{
	public:
		std::string name;
		Test() : name("atomic test")
		{
		}
};

int main()
{
	try
	{
		Array<Test> test(3);
		Array<float> floats;
		Array<int> numbers(3);
		Array<char> abc(3);

		//failing test
		// floats[0] = 10.2;

		for (int i = 0; i < 3; i++)
		{
			std::cout << "Complex test " << i << ": " << test[i].name << std::endl;
		}

		numbers[0] = 1;
		numbers[1] = 2;
		numbers[2] = 3;
		for (int i = 0; i < 3; i++)
			std::cout << "Number " << i << ": " << numbers[i] << std::endl;

		abc[0] = 'a';
		abc[1] = 'b';
		abc[2] = 'c';
		for (int i = 0; i < 3; i++)
			std::cout << "Char " << i << ": " << abc[i] << std::endl;

		Array<std::string> names(2);
		names[0] = "Walid";
		names[1] = "Mougharbel";
		for (int i = 0; i < 2; i++)
			std::cout << "Name " << i << ": " << names[i] << std::endl;

		// failing test
		std::cout << names[3];
	}
	catch(std::exception &e)
	{
		std::cerr << "Caught exception: " << e.what() << ", index out of range" << std::endl;
	}
}


// #define MAX_VAL 50

// int main() {
// 	// Create an Array and a mirror array
// 	Array<int> numbers(MAX_VAL);
// 	int* mirror = new int[MAX_VAL];

// 	// Populate the arrays with random values
// 	srand(time(NULL));
// 	for (int i = 0; i < MAX_VAL; i++) {
// 		const int value = rand();
// 		numbers[i] = value;
// 		mirror[i] = value;
// 	}

// 	// Print the elements of the numbers array
// 	std::cout << "Numbers array elements: ";
// 	for (int i = 0; i < MAX_VAL; i++) {
// 		std::cout << numbers[i] << " ";
// 	}
// 	std::cout << std::endl;

// 	// Test: Check if mirror and numbers arrays are the same
// 	for (int i = 0; i < MAX_VAL; i++) {
// 		if (mirror[i] != numbers[i]) {
// 			std::cerr << "Test failed: Didn't save the same value!" << std::endl;
// 			return 1;
// 		}
// 	}

// 	// Test: Create a new scope and test the copy constructor
// 	{
// 		Array<int> tmp = numbers;
// 		Array<int> test(tmp);

// 		// Print the elements of the test array
// 		std::cout << "Test array elements: ";
// 		for (int i = 0; i < MAX_VAL; i++) {
// 			std::cout << test[i] << " ";
// 		}
// 		std::cout << std::endl;

// 		// Test: Check if test array and numbers array are the same
// 		for (int i = 0; i < MAX_VAL; i++) {
// 			if (test[i] != numbers[i]) {
// 				std::cerr << "Test failed: Didn't save the same value!" << std::endl;
// 				return 1;
// 			}
// 		}
// 	}

// 	// Test: Check exception handling for invalid index (-2)
// 	try {
// 		numbers[-2] = 0;
// 	} catch (const std::exception& e) {
// 		std::cerr << "Caught exception: " << e.what() << ", index out of range" << std::endl;
// 	}

// 	// Test: Check exception handling for invalid index (MAX_VAL)
// 	try {
// 		numbers[MAX_VAL] = 0;
// 	} catch (const std::exception& e) {
// 		std::cerr << "Caught exception: " << e.what() << ", index out of range" << std::endl;
// 	}

// 	// Repopulate the numbers array with new random values
// 	for (int i = 0; i < MAX_VAL; i++) {
// 		numbers[i] = rand();
// 	}

// 	// Cleanup: Delete the mirror array
// 	delete[] mirror;

// 	// All tests passed
// 	return 0;
// }
