#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include "Dish.h"
#include "iostream"
class Order
{
private:
	Dish* order = new Dish[20];
	int dishes;
	int prepared;
public:
	Order() {
		this->dishes = 0;
		prepared = 0;
	}
	Order(const Order& order) {
		this->dishes = order.dishes;
		for (int i = 0; i < this->dishes; i++) {
			this->order[i] = order.order[i];
		}
	}
	void setPrepared(int a) {
		this->prepared = 1;
	}
	std::string getOrderPositions() {
		std::string s = "";
		for (int i = 0; i < dishes; i++) {
			s += order[i].getName();
			s += " ";
		}
		return s;
	}
	void addDish(Dish dish) {
		this->order[this->dishes++] = dish;
	}
	int getPrepared() {
		return this->prepared;
	}
	int getPrice() {
		int sum = 0;
		for (int i = 0; i < dishes; i++) {
			sum += this->order[i].getPrice();
		}
		return sum;
	}
	std::string getNameOFdish(int a) {
		return order[a].getName();
	}
	int getPriceOFdish(int a) {
		return order[a].getPrice();
	}
	friend Order operator+(Order order, Dish dish) {
		order.order[order.dishes++] = dish;
		return order;
	}
	friend Order* operator+(Order* order, Dish dish) {
		order->order[order->dishes++] = dish;
		return order;
	}
	friend Order operator+=(Order order, Dish dish) {
		order.order[order.dishes++] = dish;
		return order;
	}
	friend Order* operator+=(Order* order, Dish dish) {
		order->order[order->dishes++] = dish;
		return order;
	}
	Dish operator[](int index) {
		return this->order[index];
	}
};