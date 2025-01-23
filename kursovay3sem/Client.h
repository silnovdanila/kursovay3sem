#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include "Order.h"
#include "DiscountCard.h"
#include "iostream"
class Client
{
private:
	std::string name;
	DiscountCard card;
	Order currentOrder;
public:
	Client(std::string name, int idi) {
		this->card = DiscountCard(idi);
		this->name = name;
	}
	Client() = default;
	void setPrepared(int a) {
		this->currentOrder.setPrepared(a);
	}
	Client(const Client& client) {
		this->name = client.name;
		this->currentOrder = client.currentOrder;
		this->card = client.card;
	}
	std::string getCurrentOrderPositions() {
		return currentOrder.getOrderPositions();
	}
	int getPrice() {
		int m = this->currentOrder.getPrice() * (1 - card.getDiscount());
		card.setDiscount(card.getNewDiscount(card.getDiscount()));
		return m;
	}
	int getPrepared() {
		return currentOrder.getPrepared();
	}
	std::string getName() {
		return this->name;
	}
	void setOrder(Order order) {
		this->currentOrder = order;
	}
};