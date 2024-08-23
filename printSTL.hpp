/*
* This file can cout some of the STL contents.
* This file won't include any headers, and functions are activated only if the concerning headers are included
*/
#ifndef PRINTSTL_HPP
#define PRINTSTL_HPP

#ifdef _IOSTREAM_
#ifdef _VECTOR_
template<class T>void print(const std::vector<T>& v, const char name[] = "the vector", const char waytobarrier[] = " ") {
	std::cout << name<<"'s size is " << v.size() << "\ncontaining elements:\n";
	for (T i : v) {
		std::cout << i << waytobarrier;
	}
	std::cout << "\n";
}
#endif//_VECTOR_

#ifdef _DEQUE_
template<class T> void print(const std::deque<T>& d, const char name[] = "the deque", const char waytobarrier[] = " ") {
	std::cout << name<<"'s size is " << d.size() << "\ncontaining elements:\n";
	for (T i : d) {
		std::cout << i << waytobarrier;
	}
	std::cout << "\n";
}
#endif//_DEQUE_

#ifdef _LIST_
template<class T> void print(const std::list<T>& l, const char name[] = "the list", const char waytobarrier[] = " ") {
	std::cout << name << "'s size is " << l.size() << "\ncontaining elements:\n";
	for (T i : l) {
		std::cout << i << waytobarrier;
	}
	std::cout << "\n";
}
#endif//_LIST_

#ifdef _SET_
template <class T> void print(const std::set<T>& s, const char name[] = "the set", const char waytobarrier[] = " ") {
	std::cout << name << "'s size is " << s.size() << "\ncontaining elements:\n";
	for (T i : s) {
		std::cout << i << waytobarrier;
	}
	std::cout << "\n";
}
template<class T> void print(const std::multiset<T>& ms, const char name[] = "the multiset", const char waytobarrier[] = " ") {
	std::cout << name << "'s size is " << ms.size() << "\ncontaining elements:\n";
	for (T i : ms) {
		std::cout << i << waytobarrier;
	}
	std::cout << "\n";
}
#endif//_SET_

#ifdef _UNORDERED_SET_
template <class T> void print(const std::unordered_set<T>& s, const char name[] = "the unordered_set", const char waytobarrier[] = " ") {
	std::cout << name << "'s size is " << s.size() << "\ncontaining elements:\n";
	for (T i : s) {
		std::cout << i << waytobarrier;
	}
	std::cout << "\n";
}
template<class T> void print(const std::unordered_multiset<T>& ms, const char name[] = "the unordered_multiset", const char waytobarrier[] = " ") {
	std::cout << name << "'s size is " << ms.size() << "\ncontaining elements:\n";
	for (T i : ms) {
		std::cout << i << waytobarrier;
	}
	std::cout << "\n";
}
#endif//_UNORDERED_SET_

#ifdef _MAP_
template<class key, class value> void print(const std::map<key, value>& mp, const char name[] = "the map", const char btwkeyandval[] = "\t\t\t", const char waytobarrier[] = "\n") {
	std::cout << name << "'s size is " << mp.size() << "\ncontaining elements:\n";
	for (auto i : mp) {
		std::cout << "key: " << i.first << btwkeyandval <<"value: " << i.second << waytobarrier;
	}
}
#endif//_MAP_

#ifdef _UNORDERED_MAP_
template<class key, class value> void print(const std::unordered_map<key, value>& ump, const char name[] = "the unordered_map", const char btwkeyandval[] = "\t\t\t", const char waytobarrier[] = "\n") {
	std::cout << name << "'s size is " << ump.size() << "\ncontaining elements:\n";
	for (auto i : ump) {
		std::cout << "key: " << i.first << btwkeyandval <<"value: " << i.second << waytobarrier;
	}
}
#endif//_UNORDERED_MAP_

#endif // _IOSTREAM_

#endif //PRINTSTL_HPP
