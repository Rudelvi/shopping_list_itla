/*
 * Element.h
 *
 *  Created on: May 22, 2016
 *      Author: raydelto
 */

#ifndef ELEMENT_H_
#define ELEMENT_H_
#include <string>
class Element
{
	public:
		Element(std::string name);

    const std::string& getName() const {
		return _name;
	}

	void setName(const std::string& name) {
		_name = name;
	}

	 Element* getNext()
	{		return _next;	}

	void setNext( Element*& next) {
		_next = next;
	}

	private:
		Element* _next;
		std::string _name;
		//This means that List can access to all private members of this class

		const std::string& getNombre() const {
				return _name;
			}

			void setNombre(const std::string& name) {
				_name = name;
			}
		friend class List;
};

#endif /* ELEMENT_H_ */
