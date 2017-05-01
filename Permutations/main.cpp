#include <string>
#include <iostream>
#include <array>

using std::string;

void make_permutations(std::array<char, 3> elements, string result_string) {
	if (result_string.size() >= elements.size()) {
		std::cout << result_string << std::endl; //indicates we've hit a permutation
		return;
	}

	for (char cc : elements) {
		string node_string(result_string);
		string new_string(result_string);
		new_string.append(1u, cc);
		make_permutations(elements, new_string);
	}
}

int main(int argc, char** argv) {
	std::array<char, 3> elements = { 'a', 'b', 'c' };
	string new_string;
	make_permutations(elements, new_string);
	std::cin.get();
	return 0;
}
