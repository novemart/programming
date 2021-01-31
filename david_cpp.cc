#include <iostream>
using namespace std;

void print_Function(const char *input_Text)
{
	cout << "You entered " << input_Text << endl;
}

int main()
{
	cout << "Hello Martina!";
	cout << "Changes made here." << endl;
	cout << "I am trying out the pull request stuff" << endl;
	print_Function("Hello Martina!");
	return 0;
}
