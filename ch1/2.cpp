#include <iostream>
#include <cstdlib>

using namespace std;

void line(), message();

int main() {
	cout << "!!!Hello The program starts in main()." << endl;
	int x = 100;
	cout << x << endl;
	line();
	message();
	line();
	cout << "At the end of main()." << endl;
	return 0;
}

void line(){
	cout << "-------------------------" << endl;
}

void message(){
	cout << "In function message()." << endl;
}