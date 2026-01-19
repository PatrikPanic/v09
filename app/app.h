#pragma once
#include <vector>
#include <string>
#include <list>
#include <map>
#include <set>
#include <iostream>

namespace vsite::oop::v9
{
	void fill_vector(std::vector<int>& v, int n);
	void remove_element(std::vector<int>& v, int i);
	void input_element(std::vector<std::string>& v, int i, std::string s);
	int list_nth_element(std::list<int>& l, int i);
	void list_sort_desc(std::list<int>& l);
	unsigned int unique_numbers(std::istream& is);

	class word_frequency
	{
		std::map<std::string, unsigned int> words;
	public:
		word_frequency(std::istream& is);
		unsigned int count() const;
		unsigned int frequency(const std::string& word) const;
	};
}
