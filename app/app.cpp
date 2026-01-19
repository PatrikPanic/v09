#include "app.h"
#include <functional>
#include <cctype>

namespace vsite::oop::v9
{
	void fill_vector(std::vector<int>& v, int n)
	{
		for (int i = 0; i < n; ++i)
			v.push_back(i * i);
	}

	void remove_element(std::vector<int>& v, int i)
	{
		v.erase(v.begin() + i);
	}

	void input_element(std::vector<std::string>& v, int i, std::string s)
	{
		v.insert(v.begin() + i, s);
	}

	int list_nth_element(std::list<int>& l, int i)
	{
		auto it = l.begin();
		for (int j = 0; j < i; ++j)
			++it;
		return *it;
	}

	void list_sort_desc(std::list<int>& l)
	{
		l.sort(std::greater<int>());
	}

	unsigned int unique_numbers(std::istream& is)
	{
		std::set<int> s;
		int value;
		while (is >> value)
			s.insert(value);
		return s.size();
	}

	word_frequency::word_frequency(std::istream& is)
	{
		std::string word;
		while (is >> word)
		{
			for (char& c : word)
				c = std::tolower(c);
			words[word]++;
		}
	}

	unsigned int word_frequency::count() const
	{
		return words.size();
	}

	unsigned int word_frequency::frequency(const std::string& word) const
	{
		auto it = words.find(word);
		if (it != words.end())
			return it->second;
		return 0;
	}
}
