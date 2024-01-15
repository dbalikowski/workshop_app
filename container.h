#ifndef WARSZTAT_CONTAINER_H
#define WARSZTAT_CONTAINER_H
#include <vector>
#include <iostream>
#include <fstream>
#include <sstream>
#include "visit.h"

class Container {
private:
	std::vector<Visit> visits;
public:
	void addVisit(const Visit&);
	void printFullContainer();
	void printIfDate(Date);
	void printIfDay(int); 
	void printIfMonth(int);  
	void printIfYear(int); 
	void printIfName(std::string); 
	void printIfLastName(std::string); 
	void printIfIsReady(bool); 
	void printIfIsReturned(bool); 
	void fillFromFile(const std::string);
};


#endif //WARSZTAT_CONTAINER_H
