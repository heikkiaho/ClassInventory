/*
 * Property.h
 *
 *  Created on: 22.1.2014
 *      Author: Heikki
 */

#ifndef PROPERTY_H_
#define PROPERTY_H_
#include <string>
using namespace std;

class Property {
private:
	std::string id;
public:
	Property( const std::string id);
	virtual  ~Property();

	const string value;

	template<class TYPE>
	string& operator[](const TYPE & val) {
			return value;
		}
	template<typename TYPE>
	void SetValue(const TYPE & val) {
		value = val;
	}

};

#endif /* PROPERTY_H_ */
