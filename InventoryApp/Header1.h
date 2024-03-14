#pragma once
#include <iostream>
#include <string>

class mht {
private:

public:
	std::string name = "12 inch Hand Tossed";
	int boxes;
	int disks;
	int boxCount = 36;
	mht()
		: disks(0), boxes(0) {}


	mht(int itemDisks, int itemBoxCount)
		: boxes(itemBoxCount), disks(itemDisks) {}

};

class lht {
private:

public:
	std::string name = "14 inch Hand Tossed";
	int boxes;
	int disks;
	int boxCount = 32;
	lht()
		: disks(0), boxes(0) {}


	lht(int itemDisks, int itemBoxCount)
		: boxes(itemBoxCount), disks(itemDisks) {}

};

class mp {
private:

public:
	std::string name = "12 inch Pan";
	int boxes;
	int disks;
	int boxCount = 36;
	mp()
		: disks(0), boxes(0) {}


	mp(int itemDisks, int itemBoxCount)
		: boxes(itemBoxCount), disks(itemDisks) {}

};

class lp {
private:

public:
	std::string name = "14 inch Pan";
	int boxes;
	int disks;
	int boxCount = 27;
	lp()
		: disks(0), boxes(0) {}


	lp(int itemDisks, int itemBoxCount)
		: boxes(itemBoxCount), disks(itemDisks) {}

};

class rct {
private:

public:
	std::string name = "Rectangle";
	int boxes;
	int disks;
	int boxCount = 36;
	rct()
		: disks(0), boxes(0) {}


	rct(int itemDisks, int itemBoxCount)
		: boxes(itemBoxCount), disks(itemDisks) {}

};

class chicken {
private:
	
	
public:
	std::string name = "Chicken";
	int boxes;
	double bags;
	int intWeight = 20;
	double bagWeight = 2.5;
	chicken()
		: boxes(0), bags(0) {}


	chicken(int itemBoxCount, int itemBagCount)
		: boxes(itemBoxCount), bags(itemBagCount) {}
};

class bacon {
private:
	
public:
	std::string name = "Bacon";
	int boxes;
	double bags;
	int intWeight = 20;
	double bagWeight = 5;
	bacon()
		: boxes(0), bags(0) {}


	bacon(int itemBoxCount, int itemBagCount)
		:boxes(itemBoxCount), bags(itemBagCount) {}
};

class peperroni {
private:
	
public:
	std::string name = "Peperroni";
	int boxes;
	double bags;
	int intWeight = 25;
	double bagWeight = 12.5;
	peperroni()
		: boxes(0), bags(0) {}


	peperroni(int itemBoxCount, int itemBagCount)
		: boxes(itemBoxCount), bags(itemBagCount) {}
};

class ham {
private:
	
public:
	std::string name = "Ham";
	int boxes;
	double bags;
	int intWeight = 20;
	double bagWeight = 5;
	ham()
		: boxes(0), bags(0) {}


	ham(int itemBoxCount, int itemBagCount)
		: boxes(itemBoxCount), bags(itemBagCount) {}
};

class sausage {
private:
	
public:
	std::string name = "Sausage";
	int boxes;
	double bags;
	int intWeight = 20;
	double bagWeight = 5;
	sausage()
		: boxes(0), bags(0) {}


	sausage(int itemBoxCount, int itemBagCount)
		: boxes(itemBoxCount), bags(itemBagCount) {}
};

class mushrooms {
private:
	
public:
	std::string name = "Mushrooms";
	int boxes;
	double bags;
	int intWeight = 5;
	mushrooms()
		: boxes(0) {}


	mushrooms(int itemBoxCount)
		: boxes(itemBoxCount) {}
};