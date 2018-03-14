/*

 * Vincent Ha

 * CIS 22C, Winter 2017

 */

#include "Stack.h"
#include <iostream>
using namespace std;

int main()
{
	cout << "Stack Testing" << endl;
	cout << "-------------" << endl;

	Stack S1;
	cout << "Created an empty Stack. Testing print() (Should print an empty line beneath):" << endl;
	S1.print();
	cout << "Testing is_empty() (Should return true): ";
	cout << boolalpha << S1.is_empty() << endl;
	cout << "Testing get_size() on an empty Stack (Should return 0): ";
	cout << S1.get_size() << endl;
	cout << "Testing pop() on an empty stack (Would throw an assertion): " << endl;
	//S1.pop();
	cout << "Testing peek() on an empty stack (Would throw an assertion): " << endl;
	//S1.peek();
	cout << "Copying an empty stack and comparing them (Should return Stacks are equal): ";
	Stack S2(S1);
	if(S1 == S2){
		cout << "Stacks are equal" << endl;
	} else{
		cout << "Stacks are not equal" << endl;
	}

	cout << "Adding 2 elements to a stack (S1) (Should print dogs cats turtles):" << endl;
	S1.push("turtles");
	S1.push("cats");
	S1.push("dogs");
	S1.print();
	cout << "Testing get_size() (Should return 3): ";
	cout << S1.get_size() << endl;
	cout << "Testing is_empty() (Should return false): ";
	cout << S1.is_empty() << endl;
	cout << "Testing pop() (Should print out cats turtles):" << endl;
	S1.pop();
	S1.print();
	cout << "Testing the copy constructor and operator== (Should print out S1 and S3 are equal): ";
	Stack S3(S1);
	if(S1 == S3){
		cout << "S1 and S3 are equal" << endl;
	} else{
		cout << "S1 and S3 are not equal" << endl;
	}
	cout << "Testing == on S1 and an empty stack (Should print S1 and S2 are not equal): ";
	if(S1==S2){
		cout << "S1 and S2 are equal" << endl;
	} else{
		cout << "S1 and S3 are not equal" << endl;
	}
	S1.pop();
	cout << "Testing pop() on a stack with a single element (Should print out an empty line):" << endl;
	S1.pop();
	S1.print();
	cout << "-------" << endl;
}




