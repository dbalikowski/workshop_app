#include "container.h"


void Container::addVisit(const Visit& v) {
	visits.push_back(v);
}

void Container::printFullContainer() {
	for (auto& visit : visits) {
		visit.printVisit();  
	}
}

void Container::printIfDate(Date d) {
	for (auto& visit : visits) {
		if (visit.getDate() == d) {
			visit.printVisit();
		}
	}
}

void Container::printIfDay(int d) {
	for (auto& visit : visits) {
		if (visit.getDate().getDay() == d) {
			visit.printVisit();
		}
	}
}

void Container::printIfMonth(int m) {
	for (auto& visit : visits) {
		if (visit.getDate().getMonth() == m) {
			visit.printVisit();
		}
	}
}

void Container::printIfYear(int y) {
	for (auto& visit : visits) {
		if (visit.getDate().getYear() == y) {
			visit.printVisit();
		}
	}
}

void Container::printIfName(std::string str) {
	for (auto& visit : visits) {
		if (visit.getClient().getName() == str) {
			visit.printVisit();
		}
	}
}

void Container::printIfLastName(std::string str) {
	for (auto& visit : visits) {
		if (visit.getClient().getLastName() == str) {
			visit.printVisit();
		}
	}
}


void Container::printIfIsReady(bool cond) {
	for (auto& visit : visits) {
		if (visit.getIsReady() == cond) {
			visit.printVisit();
		}
	}
}

void Container::printIfIsReturned(bool cond) {
	for (auto& visit : visits) {
		if (visit.getIsReturned() == cond) {
			visit.printVisit();
		}
	}
}

void Container::fillFromFile(const std::string filename) {
	std::fstream file(filename);

	if (!file.is_open()) {
		std::cerr << "File read error";
		return;
	}

	std::string line;
	std::string name, lastName, email, phoneNum;
	int day, month, year;
	bool rdy, rtn;
	while (std::getline(file, line)) {
		std::istringstream iss(line);
		iss >> day >> month >> year >> name >> lastName >> email >> phoneNum >> rdy >> rtn;
		Visit temp(day, month, year, name, lastName, email, phoneNum, rdy, rtn);
		addVisit(temp);
	}
	file.close();

}