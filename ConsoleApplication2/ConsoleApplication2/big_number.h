#pragma once
#include<deque>

class BigNumber {
public:
	std::deque<unsigned> data_;
	enum {BASE = 10};
	BigNumber(int = 0);
	BigNumber operator+(const BigNumber &) const;
	BigNumber operator-(const BigNumber &) const;
	BigNumber operator/(const BigNumber &) const;
	BigNumber operator*(const BigNumber &) const;
};