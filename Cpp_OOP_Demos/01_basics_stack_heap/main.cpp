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
		std::cout << "Dog class has been destroyed: " << name << "\n";
	}

	void bark() const {
		std::cout << name << "sayes: Woooof Wof \n";
	}

	void setAge(int a){ age = a; }
	// Q1:Why it says int:    Q2:What the const after () means:
	// This method will return an integer, and it promises not to modify the object it belongs to.
	/*Python example:
	def get_age(self):
		return self.age
	 */

	int getAge() const { return age; }
	std::string getName() const {return name;}

};


int main() {
	//Stack Allocation
    Dog Mark("Mark", 3);
	Mark.bark(); // use stack object
	std::cout << Mark.getName() <<" age is:" << Mark.getAge() << "\n" ;

	//Heap Allocation:
	Dog *Fibo = new Dog("Fibo", 5);
	Fibo -> bark(); // use heap object
	delete Fibo; // must call manually!
	/*
	//Stack(Fast, Safe like paper stikcer at desk )
		+ A block of memory that grows/shrinks automatically as functions run and return.
		+ Very fast — just moves a pointer up or down.
		+ Memory is freed automatically when you leave the scope (end of function/block).
		+ Size is limited (few MBs by default).
	//Heap(Large object that fit in Stack and it is like a Filing cabinet)
		- Pyhton is heap based
		- A large pool of memory you can request from the operating system at runtime.
		- You decide when to allocate and when to free it.
		- Slower than stack because it requires bookkeeping.
		- Memory stays allocated until you explicitly free it (or program ends).
	*/


    return 0;
}
