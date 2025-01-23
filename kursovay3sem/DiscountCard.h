#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include "Order.h"
#include <iostream>

class DiscountCard
{
private:
	double discount;
	int orders;
	int id;
public:
	DiscountCard(int idi) {
		this->id = idi;
		this->discount = 0;
		this->orders = 0;
	}
	DiscountCard() = default;
	void getDiscount(double* discount) const {
		*discount = this->discount;
	}
	void getDiscount(std::shared_ptr<double> discount) const {
		*discount = this->discount;
	}
	double getDiscount() {
		return this->discount;
	}
	void setDiscount(double b) {
		this->discount = b;
	}
	static double getNewDiscount(double discount) {
		if (discount >= 0.089) {
			return 0.1;
		}
		return discount += 0.01;
	}
};