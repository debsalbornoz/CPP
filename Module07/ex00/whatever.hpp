#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T> void swap(T &a, T &b) {
	T temp;
	temp = a;
	a = b;
	b = temp;
}

template <typename T> T min(T first, T second) {
	if (first < second)
		return (first);
	return (second);
}

template <typename T> T max(T first, T second) {
	if (first > second)
		return first;
	return second;
}
#endif