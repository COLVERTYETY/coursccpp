#include <iostream>
#include "pair.h"

int main() {
	Pair p(15,16);
	Pair q {p};
	Pair *hp = new Pair(23,42);
	std::cout << p << q << *hp;
	delete hp;
	std::cout << "If this message is printed, at least the program hasn't crashed yet :-)" << std::endl;
	return 0;
}
