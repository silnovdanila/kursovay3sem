#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include "Menu.h"
#include "Chef.h"
#include "Waiter.h"
#include "Client.h"
#include <iostream>
class Cafe
{
private:
	Menu* menu;
	Waiter* waiters = new Waiter[3];
	int waitersNumb;
	Chef* povara = new Chef[3];
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
	HotDish getHotDish(int a) {
		return this->menu->getHotDish(a);
	}
	Dessert getdessert(int a) {
		return this->menu->getdessert(a);
	}
	Drink getdrink(int a) {
		return this->menu->getdrink(a);
	}
	int getdessertAmount() {
		return this->menu->getdessertAmount();
	}
	int getdrinkAmount() {
		return this->menu->getdrinkAmount();
	}
	int getHotDishesAmount() {
		return this->menu->getHotDishesAmount();
	}
	void addHotDish(HotDish dish) {
		this->menu->addHotDish(dish);
	}
	void deleteHotDish(int index) {
		this->menu->deleteHotDish(index);
	}
	void deleteDessert(int index) {
		this->menu->deleteDessert(index);
	}
	void deleteDrink(int index) {
		this->menu->deleteDrink(index);
	}
	void addDessert(Dessert dish) {
		this->menu->addDessert(dish);
	}
	void addDrink(Drink dish) {
		this->menu->addDrink(dish);
	}
	std::string getPovarName(int idi) {
		return povara[idi].getName();
	}
	std::string getWaiterName(int idi) {
		return waiters[idi].getName();
	}
	int getPovarSalary(int idi) {
		return povara[idi].getSalary();
	}
	int getWaiterSalary(int idi) {
		return waiters[idi].getSalary();
	}
	std::string getPovarJob(int idi) {
		return povara[idi].getJob();
	}
	std::string getWaiterJob(int idi) {
		return waiters[idi].getJob();
	}
	int getWaiterNumb() {
		return waitersNumb;
	}
	int getPovaraNumb() {
		return povaraNumb;
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
	void deleteWaiter(int idi) {
		for (int i = 0; i < waitersNumb - 1; i++) {
			if (i >= idi) {
				waiters[i] = waiters[i + 1];
			}
		}
		waitersNumb -= 1;
	}
	void deletePovar(int idi) {
		for (int i = 0; i < povaraNumb - 1; i++) {
			if (i >= idi) {
				povara[i] = povara[i + 1];
			}
		}
		povaraNumb -= 1;
	}
	void addNewClient(int idi) {
		Client client1 = Client::getNewClient(idi);
		clients[clientsNumb] = client1;
	}
};