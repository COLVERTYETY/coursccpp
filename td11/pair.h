// This example is used to illustrate the deep copy principle 
#ifndef PAIR_H
#define PAIR_H
#include <iostream>

class Pair{
	private :
		int * pa;
		int * pb;
	public :
		// This constructor should set up pa and pb to point to newly allocated memory locations on the heap 
		// and whose values will be a and b, respectively.
		Pair(int a, int b);		
		// This copy constructor should implement a deep copy from the read-only reference "other" 	
		Pair(const Pair & other);	
		// This destructor should de-allocate the heap memory properly
		~Pair();
	// An overloaded operator<<, allowing us to print a pair via cout<<
	friend std::ostream& operator<<(std::ostream& out, const Pair & p);
};
#endif
