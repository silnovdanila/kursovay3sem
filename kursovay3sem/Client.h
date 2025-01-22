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
	Client(const Client& client) {
		this->name = client.name;
		this->currentOrder = client.currentOrder;
		this->card = client.card;
	}
	int getPrice() {
		return this->currentOrder.getPrice();
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
	void addHistory() {
		this->card.setDiscount(this->card.getNewDiscount(this->card.getDiscount()));
		this->card.addTOhistoryOForders(this->currentOrder);
	}
};