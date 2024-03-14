#pragma once
#include <iostream>
#include <string>

class Dough {
	private:
		
	public:
		Dough(){}

};

class chicken {
	private:
		std::string name = "Chicken";
		int boxes;
		int bags;
		int intWeight = 20;
		double bagWeight = 2.5;
	public:
		chicken()
			: boxes(0), bags(0){}


		chicken(int itemBoxCount, int itemBagCount) 
			:  boxes(itemBoxCount), bags(itemBagCount){}
};

class bacon {
private:
	std::string name = "Bacon";
	int boxes;
	int bags;
	int intWeight = 20;
	double bagWeight = 5;
public:
	bacon()
		: boxes(0), bags(0) {}


	bacon(int itemBoxCount, int itemBagCount)
		:boxes(itemBoxCount), bags(itemBagCount) {}
};

class peperroni {
private:
	std::string name = "Peperroni";
	int boxes;
	int bags;
	int intWeight = 25;
	double bagWeight = 12.5;
public:
	peperroni()
		: boxes(0), bags(0) {}


	peperroni(int itemBoxCount, int itemBagCount)
		: boxes(itemBoxCount), bags(itemBagCount) {}
};

class ham {
private:
	std::string name = "Ham";
	int boxes;
	int bags;
	int intWeight = 20;
	double bagWeight = 5;
public:
	ham()
		: boxes(0), bags(0) {}


	ham(int itemBoxCount, int itemBagCount)
		: boxes(itemBoxCount), bags(itemBagCount) {}
};

class sausage {
private:
	std::string name = "Sausage";
	int boxes;
	int bags;
	int intWeight = 20;
	double bagWeight = 5;
public:
	sausage()
		: boxes(0), bags(0) {}


	sausage(int itemBoxCount, int itemBagCount)
		: boxes(itemBoxCount), bags(itemBagCount) {}
};

class mushrooms {
private:
	std::string name = "Mushrooms";
	int boxes;
	int bags;
	int intWeight = 5;
public:
	mushrooms()
		:  boxes(0) {}


	mushrooms(int itemBoxCount)
		:  boxes(itemBoxCount) {}
};