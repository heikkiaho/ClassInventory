/*
 * StringPrinter.cpp
 *
 *  Created on: 25.1.2014
 *      Author: Heikki
 */

#include "StringPrinter.h"

using namespace std;

StringPrinter::StringPrinter() {
	// TODO Auto-generated constructor stub

}

StringPrinter::~StringPrinter() {
	// TODO Auto-generated destructor stub
}

void StringPrinter::AddString(std::string StringElement) {
	stringList.push_back(StringElement);
}

std::ostream& StringPrinter::PrintStrings(std::ostream& stream) {
	if (stringList.empty()) {
		stream << "";
	} else {
		for (std::list<std::string>::iterator it = stringList.begin(); it != stringList.end(); it++) {
			stream << *it;
			//if not single element
			if (stringList.size() > 1) {
				//if not last element
				if (it != (--stringList.end())) {
					//between two last elements
					if (it == (----stringList.end())) {
						stream << " and ";
					}
					//other elements
					else {
						stream << ", ";
					}
				}
			}
		}
	}
	return stream;
}


void StringPrinter::Clear()
{
	stringList.clear();
}

void StringPrinter::AddStringList(std::list<std::string> StringElementList) {
	stringList.insert(stringList.end(), StringElementList.begin(), StringElementList.end());
}
