#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include "DiscountCard.h"
#include "Dish.h"
#include "Menu.h"
#include "Order.h"
#include "Chef.h"
#include "Waiter.h"
#include "Client.h"
#include "OrderFunc.h"
#include <iostream>
class Cafe
{
private:
	Menu* menu;
	Waiter* waiters = new Waiter[2];
	int waitersNumb;
	Chef* povara = new Chef[2];
	int povaraNumb;
	Client* clients = new Client[20];
	int clientsNumb;
	Client* currentClients = new Client[10];
	int currentClientsNumb;
public:
	Cafe() {
		menu = new Menu;
		waitersNumb = 0;
		povaraNumb = 0;
		clientsNumb = 0;
		currentClientsNumb = 0;
	}
	void addHotDish(HotDish dish) {
		menu->addHotDish(dish);
	}
	void addDessert(Dessert dish) {
		menu->addDessert(dish);
	}
	void addDrink(Drink dish) {
		menu->addDrink(dish);
	}
	void setMenu(Menu* menu) {
		this->menu = menu;
	}
	void addWaiter(Waiter waiter) {
		waiters[waitersNumb++] = waiter;
	}
	void addPovar(Chef povar) {
		povara[povaraNumb++] = povar;
	}
	void addNewClient() {
		Client client1 = Client::getNewClient();
		clients[clientsNumb] = client1;
	}
};