#include <iostream>
#include <string>

class Dog{
private:
	std::string name;
	int age;
public:
	//Constructor:

	/*
	1. A constructor is a special method that has the same name as the class.
	2. It runs automatically when you create an object.
	3. You don’t write a return type (not even void).
	*/

	Dog(const std::string& name_, int age_) : name(name_), age (age_) {
	std::cout << "Dog constructed: " << name << "\n";
	}

	//what does "std::string&" mean?

	/* The & symbol indicates that the variable is a reference.
    A reference in C++ is an alias for another variable.
    When you create a reference, you are not creating a new object;
    instead, you are creating a new name for an existing object.

	Benefits of Using std::string&:
	1. Efficiency: Passing a std::string by reference avoids copying
		 the entire string, which can be expensive in terms of performance,
		 especially for large strings.
    2.Modification: If you pass a std::string& to a function,
	 any changes made to the string inside that function will affect
	 the original string outside the function.
    */

	//what does name(name_), age (age_) mean?
	// give name the value name_ and age the value age_

	//Why not just assign inside the body like this code down below?
	/*
	Dog(const std::string& name_, int age_) {
    	name = name_;   // <-- assignment, happens after default constructor of name
    	age = age_;
	}
	This works, but for some types (like const variables, references,
 	or complex classes), you can’t assign later
	— they must be set right when they’re created.

	With an initializer list, you avoid creating an empty object first
 	and then overwriting it — instead, you construct it with the
 	correct value immediately (more efficient).
	*/

	// Destructor:
	~Dog() {
		std:cout << "Dog class has been destroyed: " << name << "\n";
	}
	}


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
