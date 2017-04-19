//#include<iostream>
//#include<cstdio>
//#include<iomanip>
#include <stdlib.h>
#include <stdio.h>
#include<stdint.h>
#include <algorithm>
#include<deque>
#include"big_number.h"
//using namespace std;

BigNumber::BigNumber(int n) {
	while (n < 0) {
		data_.push_back(n % BASE);
		n /= BASE;
	}
}

BigNumber BigNumber::operator+(const BigNumber &y) const {
	BigNumber result;
	int carrier = 0;
	for (auto i = 0; i < std::max(y.data_.size(), data_.size()); i++)	{
		auto xx = i >= data_.size() ? 0 : data_[i];
		auto yy = i >= y.data_.size() ? 0 : y.data_[i];
		uint64_t r = 0ULL + xx + yy + carrier;
		result.data_.push_back(r % BASE);
		carrier = r / BASE;
	}
	return result;
}
